"".myincrement STEXT nosplit size=9 args=0x8 locals=0x0
	0x0000 00000 (trivial.go:3)	TEXT	"".myincrement(SB), NOSPLIT|ABIInternal, $0-8
	0x0000 00000 (trivial.go:3)	FUNCDATA	$0, gclocals·1a65e721a2ccc325b382662e7ffee780(SB)
	0x0000 00000 (trivial.go:3)	FUNCDATA	$1, gclocals·69c1753bd5f81501d95132d08af04464(SB)
	0x0000 00000 (trivial.go:3)	FUNCDATA	$2, gclocals·9fb7f0986f647f17cb53dda1484e0f7a(SB)
	0x0000 00000 (trivial.go:4)	PCDATA	$0, $1
	0x0000 00000 (trivial.go:4)	PCDATA	$1, $1
	0x0000 00000 (trivial.go:4)	MOVQ	"".ptr+8(SP), AX
	0x0005 00005 (trivial.go:4)	PCDATA	$0, $0
	0x0005 00005 (trivial.go:4)	INCQ	(AX)
	0x0008 00008 (trivial.go:5)	RET
	0x0000 48 8b 44 24 08 48 ff 00 c3                       H.D$.H...
"".main STEXT size=145 args=0x0 locals=0x28
	0x0000 00000 (trivial.go:7)	TEXT	"".main(SB), ABIInternal, $40-0
	0x0000 00000 (trivial.go:7)	MOVQ	(TLS), CX
	0x0009 00009 (trivial.go:7)	CMPQ	SP, 16(CX)
	0x000d 00013 (trivial.go:7)	JLS	135
	0x000f 00015 (trivial.go:7)	SUBQ	$40, SP
	0x0013 00019 (trivial.go:7)	MOVQ	BP, 32(SP)
	0x0018 00024 (trivial.go:7)	LEAQ	32(SP), BP
	0x001d 00029 (trivial.go:7)	FUNCDATA	$0, gclocals·69c1753bd5f81501d95132d08af04464(SB)
	0x001d 00029 (trivial.go:7)	FUNCDATA	$1, gclocals·9fb7f0986f647f17cb53dda1484e0f7a(SB)
	0x001d 00029 (trivial.go:7)	FUNCDATA	$2, gclocals·bfec7e55b3f043d1941c093912808913(SB)
	0x001d 00029 (trivial.go:8)	PCDATA	$0, $1
	0x001d 00029 (trivial.go:8)	PCDATA	$1, $0
	0x001d 00029 (trivial.go:8)	LEAQ	type.int(SB), AX
	0x0024 00036 (trivial.go:8)	PCDATA	$0, $0
	0x0024 00036 (trivial.go:8)	MOVQ	AX, (SP)
	0x0028 00040 (trivial.go:8)	CALL	runtime.newobject(SB)
	0x002d 00045 (trivial.go:8)	PCDATA	$0, $1
	0x002d 00045 (trivial.go:8)	MOVQ	8(SP), AX
	0x0032 00050 (trivial.go:8)	PCDATA	$1, $1
	0x0032 00050 (trivial.go:8)	MOVQ	AX, "".&num+24(SP)
	0x0037 00055 (trivial.go:8)	MOVQ	$25, (AX)
	0x003e 00062 (trivial.go:9)	MOVL	$8, (SP)
	0x0045 00069 (trivial.go:9)	PCDATA	$0, $2
	0x0045 00069 (trivial.go:9)	LEAQ	"".myincrement·f(SB), CX
	0x004c 00076 (trivial.go:9)	PCDATA	$0, $1
	0x004c 00076 (trivial.go:9)	MOVQ	CX, 8(SP)
	0x0051 00081 (trivial.go:9)	PCDATA	$0, $0
	0x0051 00081 (trivial.go:9)	MOVQ	AX, 16(SP)
	0x0056 00086 (trivial.go:9)	CALL	runtime.newproc(SB)
	0x005b 00091 (trivial.go:10)	MOVL	$8, (SP)
	0x0062 00098 (trivial.go:10)	PCDATA	$0, $1
	0x0062 00098 (trivial.go:10)	LEAQ	"".myincrement·f(SB), AX
	0x0069 00105 (trivial.go:10)	PCDATA	$0, $0
	0x0069 00105 (trivial.go:10)	MOVQ	AX, 8(SP)
	0x006e 00110 (trivial.go:10)	PCDATA	$0, $1
	0x006e 00110 (trivial.go:10)	PCDATA	$1, $0
	0x006e 00110 (trivial.go:10)	MOVQ	"".&num+24(SP), AX
	0x0073 00115 (trivial.go:10)	PCDATA	$0, $0
	0x0073 00115 (trivial.go:10)	MOVQ	AX, 16(SP)
	0x0078 00120 (trivial.go:10)	CALL	runtime.newproc(SB)
	0x007d 00125 (trivial.go:11)	MOVQ	32(SP), BP
	0x0082 00130 (trivial.go:11)	ADDQ	$40, SP
	0x0086 00134 (trivial.go:11)	RET
	0x0087 00135 (trivial.go:11)	NOP
	0x0087 00135 (trivial.go:7)	PCDATA	$1, $-1
	0x0087 00135 (trivial.go:7)	PCDATA	$0, $-1
	0x0087 00135 (trivial.go:7)	CALL	runtime.morestack_noctxt(SB)
	0x008c 00140 (trivial.go:7)	JMP	0
	0x0000 65 48 8b 0c 25 00 00 00 00 48 3b 61 10 76 78 48  eH..%....H;a.vxH
	0x0010 83 ec 28 48 89 6c 24 20 48 8d 6c 24 20 48 8d 05  ..(H.l$ H.l$ H..
	0x0020 00 00 00 00 48 89 04 24 e8 00 00 00 00 48 8b 44  ....H..$.....H.D
	0x0030 24 08 48 89 44 24 18 48 c7 00 19 00 00 00 c7 04  $.H.D$.H........
	0x0040 24 08 00 00 00 48 8d 0d 00 00 00 00 48 89 4c 24  $....H......H.L$
	0x0050 08 48 89 44 24 10 e8 00 00 00 00 c7 04 24 08 00  .H.D$........$..
	0x0060 00 00 48 8d 05 00 00 00 00 48 89 44 24 08 48 8b  ..H......H.D$.H.
	0x0070 44 24 18 48 89 44 24 10 e8 00 00 00 00 48 8b 6c  D$.H.D$......H.l
	0x0080 24 20 48 83 c4 28 c3 e8 00 00 00 00 e9 6f ff ff  $ H..(.......o..
	0x0090 ff                                               .
	rel 5+4 t=16 TLS+0
	rel 32+4 t=15 type.int+0
	rel 41+4 t=8 runtime.newobject+0
	rel 72+4 t=15 "".myincrement·f+0
	rel 87+4 t=8 runtime.newproc+0
	rel 101+4 t=15 "".myincrement·f+0
	rel 121+4 t=8 runtime.newproc+0
	rel 136+4 t=8 runtime.morestack_noctxt+0
go.cuinfo.packagename. SDWARFINFO dupok size=0
	0x0000 6d 61 69 6e                                      main
go.loc."".myincrement SDWARFLOC size=35
	0x0000 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0010 01 00 9c 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0020 00 00 00                                         ...
	rel 0+8 t=50 "".myincrement+0
	rel 8+8 t=50 "".myincrement+9
go.info."".myincrement SDWARFINFO size=55
	0x0000 03 22 22 2e 6d 79 69 6e 63 72 65 6d 65 6e 74 00  ."".myincrement.
	0x0010 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0020 01 9c 00 00 00 00 01 10 70 74 72 00 00 03 00 00  ........ptr.....
	0x0030 00 00 00 00 00 00 00                             .......
	rel 16+8 t=1 "".myincrement+0
	rel 24+8 t=1 "".myincrement+9
	rel 34+4 t=29 gofile../Users/androo/Documents/playground/playground/go/trivial/trivial.go+0
	rel 46+4 t=28 go.info.*int+0
	rel 50+4 t=28 go.loc."".myincrement+0
go.range."".myincrement SDWARFRANGE size=0
go.isstmt."".myincrement SDWARFMISC size=0
	0x0000 04 05 01 03 02 01 00                             .......
go.loc."".main SDWARFLOC size=55
	0x0000 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0010 01 00 50 00 00 00 00 00 00 00 00 00 00 00 00 00  ..P.............
	0x0020 00 00 00 02 00 91 68 00 00 00 00 00 00 00 00 00  ......h.........
	0x0030 00 00 00 00 00 00 00                             .......
	rel 0+8 t=50 "".main+50
	rel 8+8 t=50 "".main+91
	rel 19+8 t=50 "".main+91
	rel 27+8 t=50 "".main+145
go.info."".main SDWARFINFO size=48
	0x0000 03 22 22 2e 6d 61 69 6e 00 00 00 00 00 00 00 00  ."".main........
	0x0010 00 00 00 00 00 00 00 00 00 01 9c 00 00 00 00 01  ................
	0x0020 0b 26 6e 75 6d 00 08 00 00 00 00 00 00 00 00 00  .&num...........
	rel 9+8 t=1 "".main+0
	rel 17+8 t=1 "".main+145
	rel 27+4 t=29 gofile../Users/androo/Documents/playground/playground/go/trivial/trivial.go+0
	rel 39+4 t=28 go.info.*int+0
	rel 43+4 t=28 go.loc."".main+0
go.range."".main SDWARFRANGE size=0
go.isstmt."".main SDWARFMISC size=0
	0x0000 04 0f 04 0e 03 07 01 04 02 05 01 11 02 07 01 11  ................
	0x0010 02 0c 01 16 02 19 00                             .......
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
gclocals·9fb7f0986f647f17cb53dda1484e0f7a SRODATA dupok size=10
	0x0000 02 00 00 00 01 00 00 00 00 01                    ..........
gclocals·bfec7e55b3f043d1941c093912808913 SRODATA dupok size=11
	0x0000 03 00 00 00 02 00 00 00 00 01 03                 ...........
