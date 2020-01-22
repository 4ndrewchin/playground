"".myincrement STEXT size=119 args=0x8 locals=0x18
	0x0000 00000 (trivial.go:3)	TEXT	"".myincrement(SB), ABIInternal, $24-8
	0x0000 00000 (trivial.go:3)	MOVQ	(TLS), CX
	0x0009 00009 (trivial.go:3)	CMPQ	SP, 16(CX)
	0x000d 00013 (trivial.go:3)	JLS	112
	0x000f 00015 (trivial.go:3)	SUBQ	$24, SP
	0x0013 00019 (trivial.go:3)	MOVQ	BP, 16(SP)
	0x0018 00024 (trivial.go:3)	LEAQ	16(SP), BP
	0x001d 00029 (trivial.go:3)	FUNCDATA	$0, gclocals·1a65e721a2ccc325b382662e7ffee780(SB)
	0x001d 00029 (trivial.go:3)	FUNCDATA	$1, gclocals·69c1753bd5f81501d95132d08af04464(SB)
	0x001d 00029 (trivial.go:3)	FUNCDATA	$2, gclocals·1cf923758aae2e428391d1783fe59973(SB)
	0x001d 00029 (trivial.go:3)	PCDATA	$0, $0
	0x001d 00029 (trivial.go:3)	PCDATA	$1, $0
	0x001d 00029 (trivial.go:3)	MOVQ	""..fp+24(SP), AX
	0x0022 00034 (trivial.go:3)	MOVQ	AX, (SP)
	0x0026 00038 (trivial.go:3)	CALL	runtime.racefuncenter(SB)
	0x002b 00043 (trivial.go:4)	PCDATA	$0, $1
	0x002b 00043 (trivial.go:4)	MOVQ	"".ptr+32(SP), AX
	0x0030 00048 (trivial.go:4)	TESTB	AL, (AX)
	0x0032 00050 (trivial.go:4)	PCDATA	$0, $0
	0x0032 00050 (trivial.go:4)	MOVQ	AX, (SP)
	0x0036 00054 (trivial.go:4)	CALL	runtime.raceread(SB)
	0x003b 00059 (trivial.go:4)	PCDATA	$0, $1
	0x003b 00059 (trivial.go:4)	MOVQ	"".ptr+32(SP), AX
	0x0040 00064 (trivial.go:4)	MOVQ	(AX), CX
	0x0043 00067 (trivial.go:4)	MOVQ	CX, ""..autotmp_4+8(SP)
	0x0048 00072 (trivial.go:4)	PCDATA	$0, $0
	0x0048 00072 (trivial.go:4)	MOVQ	AX, (SP)
	0x004c 00076 (trivial.go:4)	CALL	runtime.racewrite(SB)
	0x0051 00081 (trivial.go:4)	MOVQ	""..autotmp_4+8(SP), AX
	0x0056 00086 (trivial.go:4)	INCQ	AX
	0x0059 00089 (trivial.go:4)	PCDATA	$0, $2
	0x0059 00089 (trivial.go:4)	PCDATA	$1, $1
	0x0059 00089 (trivial.go:4)	MOVQ	"".ptr+32(SP), CX
	0x005e 00094 (trivial.go:4)	PCDATA	$0, $0
	0x005e 00094 (trivial.go:4)	MOVQ	AX, (CX)
	0x0061 00097 (trivial.go:5)	CALL	runtime.racefuncexit(SB)
	0x0066 00102 (trivial.go:5)	MOVQ	16(SP), BP
	0x006b 00107 (trivial.go:5)	ADDQ	$24, SP
	0x006f 00111 (trivial.go:5)	RET
	0x0070 00112 (trivial.go:5)	NOP
	0x0070 00112 (trivial.go:3)	PCDATA	$1, $-1
	0x0070 00112 (trivial.go:3)	PCDATA	$0, $-1
	0x0070 00112 (trivial.go:3)	CALL	runtime.morestack_noctxt(SB)
	0x0075 00117 (trivial.go:3)	JMP	0
	0x0000 65 48 8b 0c 25 00 00 00 00 48 3b 61 10 76 61 48  eH..%....H;a.vaH
	0x0010 83 ec 18 48 89 6c 24 10 48 8d 6c 24 10 48 8b 44  ...H.l$.H.l$.H.D
	0x0020 24 18 48 89 04 24 e8 00 00 00 00 48 8b 44 24 20  $.H..$.....H.D$ 
	0x0030 84 00 48 89 04 24 e8 00 00 00 00 48 8b 44 24 20  ..H..$.....H.D$ 
	0x0040 48 8b 08 48 89 4c 24 08 48 89 04 24 e8 00 00 00  H..H.L$.H..$....
	0x0050 00 48 8b 44 24 08 48 ff c0 48 8b 4c 24 20 48 89  .H.D$.H..H.L$ H.
	0x0060 01 e8 00 00 00 00 48 8b 6c 24 10 48 83 c4 18 c3  ......H.l$.H....
	0x0070 e8 00 00 00 00 eb 89                             .......
	rel 5+4 t=16 TLS+0
	rel 39+4 t=8 runtime.racefuncenter+0
	rel 55+4 t=8 runtime.raceread+0
	rel 77+4 t=8 runtime.racewrite+0
	rel 98+4 t=8 runtime.racefuncexit+0
	rel 113+4 t=8 runtime.morestack_noctxt+0
"".main STEXT size=182 args=0x0 locals=0x28
	0x0000 00000 (trivial.go:7)	TEXT	"".main(SB), ABIInternal, $40-0
	0x0000 00000 (trivial.go:7)	MOVQ	(TLS), CX
	0x0009 00009 (trivial.go:7)	CMPQ	SP, 16(CX)
	0x000d 00013 (trivial.go:7)	JLS	172
	0x0013 00019 (trivial.go:7)	SUBQ	$40, SP
	0x0017 00023 (trivial.go:7)	MOVQ	BP, 32(SP)
	0x001c 00028 (trivial.go:7)	LEAQ	32(SP), BP
	0x0021 00033 (trivial.go:7)	FUNCDATA	$0, gclocals·69c1753bd5f81501d95132d08af04464(SB)
	0x0021 00033 (trivial.go:7)	FUNCDATA	$1, gclocals·9fb7f0986f647f17cb53dda1484e0f7a(SB)
	0x0021 00033 (trivial.go:7)	FUNCDATA	$2, gclocals·bfec7e55b3f043d1941c093912808913(SB)
	0x0021 00033 (trivial.go:7)	PCDATA	$0, $0
	0x0021 00033 (trivial.go:7)	PCDATA	$1, $0
	0x0021 00033 (trivial.go:7)	MOVQ	""..fp+40(SP), AX
	0x0026 00038 (trivial.go:7)	MOVQ	AX, (SP)
	0x002a 00042 (trivial.go:7)	CALL	runtime.racefuncenter(SB)
	0x002f 00047 (trivial.go:8)	PCDATA	$0, $1
	0x002f 00047 (trivial.go:8)	LEAQ	type.int(SB), AX
	0x0036 00054 (trivial.go:8)	PCDATA	$0, $0
	0x0036 00054 (trivial.go:8)	MOVQ	AX, (SP)
	0x003a 00058 (trivial.go:8)	CALL	runtime.newobject(SB)
	0x003f 00063 (trivial.go:8)	PCDATA	$0, $1
	0x003f 00063 (trivial.go:8)	MOVQ	8(SP), AX
	0x0044 00068 (trivial.go:8)	PCDATA	$1, $1
	0x0044 00068 (trivial.go:8)	MOVQ	AX, "".&num+24(SP)
	0x0049 00073 (trivial.go:8)	PCDATA	$0, $0
	0x0049 00073 (trivial.go:8)	MOVQ	AX, (SP)
	0x004d 00077 (trivial.go:8)	CALL	runtime.racewrite(SB)
	0x0052 00082 (trivial.go:8)	PCDATA	$0, $1
	0x0052 00082 (trivial.go:8)	MOVQ	"".&num+24(SP), AX
	0x0057 00087 (trivial.go:8)	MOVQ	$25, (AX)
	0x005e 00094 (trivial.go:9)	MOVL	$8, (SP)
	0x0065 00101 (trivial.go:9)	PCDATA	$0, $2
	0x0065 00101 (trivial.go:9)	LEAQ	"".myincrement·f(SB), CX
	0x006c 00108 (trivial.go:9)	PCDATA	$0, $1
	0x006c 00108 (trivial.go:9)	MOVQ	CX, 8(SP)
	0x0071 00113 (trivial.go:9)	PCDATA	$0, $0
	0x0071 00113 (trivial.go:9)	MOVQ	AX, 16(SP)
	0x0076 00118 (trivial.go:9)	CALL	runtime.newproc(SB)
	0x007b 00123 (trivial.go:10)	MOVL	$8, (SP)
	0x0082 00130 (trivial.go:10)	PCDATA	$0, $1
	0x0082 00130 (trivial.go:10)	LEAQ	"".myincrement·f(SB), AX
	0x0089 00137 (trivial.go:10)	PCDATA	$0, $0
	0x0089 00137 (trivial.go:10)	MOVQ	AX, 8(SP)
	0x008e 00142 (trivial.go:10)	PCDATA	$0, $1
	0x008e 00142 (trivial.go:10)	PCDATA	$1, $0
	0x008e 00142 (trivial.go:10)	MOVQ	"".&num+24(SP), AX
	0x0093 00147 (trivial.go:10)	PCDATA	$0, $0
	0x0093 00147 (trivial.go:10)	MOVQ	AX, 16(SP)
	0x0098 00152 (trivial.go:10)	CALL	runtime.newproc(SB)
	0x009d 00157 (trivial.go:11)	CALL	runtime.racefuncexit(SB)
	0x00a2 00162 (trivial.go:11)	MOVQ	32(SP), BP
	0x00a7 00167 (trivial.go:11)	ADDQ	$40, SP
	0x00ab 00171 (trivial.go:11)	RET
	0x00ac 00172 (trivial.go:11)	NOP
	0x00ac 00172 (trivial.go:7)	PCDATA	$1, $-1
	0x00ac 00172 (trivial.go:7)	PCDATA	$0, $-1
	0x00ac 00172 (trivial.go:7)	CALL	runtime.morestack_noctxt(SB)
	0x00b1 00177 (trivial.go:7)	JMP	0
	0x0000 65 48 8b 0c 25 00 00 00 00 48 3b 61 10 0f 86 99  eH..%....H;a....
	0x0010 00 00 00 48 83 ec 28 48 89 6c 24 20 48 8d 6c 24  ...H..(H.l$ H.l$
	0x0020 20 48 8b 44 24 28 48 89 04 24 e8 00 00 00 00 48   H.D$(H..$.....H
	0x0030 8d 05 00 00 00 00 48 89 04 24 e8 00 00 00 00 48  ......H..$.....H
	0x0040 8b 44 24 08 48 89 44 24 18 48 89 04 24 e8 00 00  .D$.H.D$.H..$...
	0x0050 00 00 48 8b 44 24 18 48 c7 00 19 00 00 00 c7 04  ..H.D$.H........
	0x0060 24 08 00 00 00 48 8d 0d 00 00 00 00 48 89 4c 24  $....H......H.L$
	0x0070 08 48 89 44 24 10 e8 00 00 00 00 c7 04 24 08 00  .H.D$........$..
	0x0080 00 00 48 8d 05 00 00 00 00 48 89 44 24 08 48 8b  ..H......H.D$.H.
	0x0090 44 24 18 48 89 44 24 10 e8 00 00 00 00 e8 00 00  D$.H.D$.........
	0x00a0 00 00 48 8b 6c 24 20 48 83 c4 28 c3 e8 00 00 00  ..H.l$ H..(.....
	0x00b0 00 e9 4a ff ff ff                                ..J...
	rel 5+4 t=16 TLS+0
	rel 43+4 t=8 runtime.racefuncenter+0
	rel 50+4 t=15 type.int+0
	rel 59+4 t=8 runtime.newobject+0
	rel 78+4 t=8 runtime.racewrite+0
	rel 104+4 t=15 "".myincrement·f+0
	rel 119+4 t=8 runtime.newproc+0
	rel 133+4 t=15 "".myincrement·f+0
	rel 153+4 t=8 runtime.newproc+0
	rel 158+4 t=8 runtime.racefuncexit+0
	rel 173+4 t=8 runtime.morestack_noctxt+0
go.cuinfo.packagename. SDWARFINFO dupok size=0
	0x0000 6d 61 69 6e                                      main
go.loc."".myincrement SDWARFLOC size=35
	0x0000 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0010 01 00 9c 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0020 00 00 00                                         ...
	rel 0+8 t=50 "".myincrement+0
	rel 8+8 t=50 "".myincrement+119
go.info."".myincrement SDWARFINFO size=55
	0x0000 03 22 22 2e 6d 79 69 6e 63 72 65 6d 65 6e 74 00  ."".myincrement.
	0x0010 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0020 01 9c 00 00 00 00 01 10 70 74 72 00 00 03 00 00  ........ptr.....
	0x0030 00 00 00 00 00 00 00                             .......
	rel 16+8 t=1 "".myincrement+0
	rel 24+8 t=1 "".myincrement+119
	rel 34+4 t=29 gofile../Users/androo/Documents/playground/playground/go/trivial/trivial.go+0
	rel 46+4 t=28 go.info.*int+0
	rel 50+4 t=28 go.loc."".myincrement+0
go.range."".myincrement SDWARFRANGE size=0
go.isstmt."".myincrement SDWARFMISC size=0
	0x0000 04 0f 04 0e 03 05 01 04 02 0a 01 06 02 05 01 11  ................
	0x0010 02 05 01 10 02 16 00                             .......
go.loc."".main SDWARFLOC size=55
	0x0000 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0010 01 00 50 00 00 00 00 00 00 00 00 00 00 00 00 00  ..P.............
	0x0020 00 00 00 02 00 91 68 00 00 00 00 00 00 00 00 00  ......h.........
	0x0030 00 00 00 00 00 00 00                             .......
	rel 0+8 t=50 "".main+68
	rel 8+8 t=50 "".main+82
	rel 19+8 t=50 "".main+82
	rel 27+8 t=50 "".main+182
go.info."".main SDWARFINFO size=48
	0x0000 03 22 22 2e 6d 61 69 6e 00 00 00 00 00 00 00 00  ."".main........
	0x0010 00 00 00 00 00 00 00 00 00 01 9c 00 00 00 00 01  ................
	0x0020 0b 26 6e 75 6d 00 08 00 00 00 00 00 00 00 00 00  .&num...........
	rel 9+8 t=1 "".main+0
	rel 17+8 t=1 "".main+182
	rel 27+4 t=29 gofile../Users/androo/Documents/playground/playground/go/trivial/trivial.go+0
	rel 39+4 t=28 go.info.*int+0
	rel 43+4 t=28 go.loc."".main+0
go.range."".main SDWARFRANGE size=0
go.isstmt."".main SDWARFMISC size=0
	0x0000 04 13 04 0e 03 05 01 04 02 0c 01 04 02 05 01 0e  ................
	0x0010 02 05 01 0c 02 07 01 11 02 0c 01 16 02 1e 00     ...............
""..inittask SNOPTRDATA size=24
	0x0000 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0010 00 00 00 00 00 00 00 00                          ........
"".myincrement·f SRODATA dupok size=8
	0x0000 00 00 00 00 00 00 00 00                          ........
	rel 0+8 t=1 "".myincrement+0
gclocals·1a65e721a2ccc325b382662e7ffee780 SRODATA dupok size=10
	0x0000 02 00 00 00 01 00 00 00 01 00                    ..........
gclocals·69c1753bd5f81501d95132d08af04464 SRODATA dupok size=8
	0x0000 02 00 00 00 00 00 00 00                          ........
gclocals·1cf923758aae2e428391d1783fe59973 SRODATA dupok size=11
	0x0000 03 00 00 00 02 00 00 00 00 01 02                 ...........
gclocals·9fb7f0986f647f17cb53dda1484e0f7a SRODATA dupok size=10
	0x0000 02 00 00 00 01 00 00 00 00 01                    ..........
gclocals·bfec7e55b3f043d1941c093912808913 SRODATA dupok size=11
	0x0000 03 00 00 00 02 00 00 00 00 01 03                 ...........
