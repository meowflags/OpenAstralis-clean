// sub_1EB2720
// rva 0x01eb2720  size 305  section .text  group text
// window base 0x181eb2720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1EB2720(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  char v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h]
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v9);
  }
  else if ( a5 != v6 )
  {
    v8 = *(unsigned int *)(a5 + 8);
    if ( (unsigned int)v8 < 0xB )
    {
      if ( (unsigned int)v8 <= 9 )
        __asm { jmp     rax; switch jump }
LABEL_9:
      v11 = a3;
      v10 = a5;
      sub_28C1E80(a1, a2, a3: a5);
      __halt();
    }
LABEL_8:
    v11 = a3;
    sub_2771220(a1, a2, a3: (unsigned int)v8, a4: a5, a5: 11);
    goto LABEL_9;
  }
  sub_2771080();
  goto LABEL_8;
}
