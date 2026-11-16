// sub_1815AE160
// rva 0x015ae160  size 128  section .text  group text
// window base 0x1815ae160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815AE160(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  __int64 v14; // [rsp+8h] [rbp-10h]
  _DWORD *v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    return sub_1815AE1E0();
  }
  else
  {
    v6 = *a3 >> 3;
    v7 = (__int64 (*)(void))(v3
                           + *(_QWORD *)(v4
                                       + 8 * v6
                                       + HIWORD(*(_DWORD *)(v4
                                                          + 8LL * *(unsigned int *)(v4 + 8 * v6 + 20)
                                                          + 4LL
                                                          * (*(_DWORD *)(v4 + 8 * v6 + 44)
                                                           & (0x16ECu >> HIBYTE(*(_DWORD *)(v4 + 8 * v6 + 44))))
                                                          + 12))
                                       + 32));
    v15 = a3;
    v14 = v4 + 360167272;
    v8 = v7();
    result = MEMORY[0x18C710140](a1: v10, a2: v11, a3: v14, a4: v9, a5: v8);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
