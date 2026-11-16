// sub_1815CCB00
// rva 0x015ccb00  size 282  section .text  group text
// window base 0x1815ccb00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1815CCB00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+8h] [rbp-10h]
  __int64 v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    JUMPOUT(0x1815CCC20LL);
  }
  v15 = a3;
  v6 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int64)(v6 + 40) > *(_QWORD *)(v5 + 32) )
  {
    v6 = MEMORY[0x181EAA920](a1, a2, a3: 35866584);
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v6 + 40;
    *(_DWORD *)v6 = 35866584;
    *(_DWORD *)(v6 + 4) = 0;
    *(_QWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 32) = 0;
  }
  v14 = (_DWORD *)v6;
  *(_DWORD *)(v6 + 20) = 46923644;
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(v4 + 374343896);
  *(_DWORD *)(v6 + 12) = (unsigned __int64)(v6 - v4) >> 3;
  MEMORY[0x18503B9A0](a1, a2, a3: v6, a4, a5: 0);
  v10 = (unsigned __int64)v14;
  v14[2] = (unsigned __int64)(v15 - v4) >> 3;
  if ( (*(_DWORD *)v10 & 2) != 0 )
  {
    v7 = v10 & 0xFFFFFFFFFFF80000LL;
    v12 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v12) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v12) >> 9) + 0x38) = 0;
  }
  MEMORY[0x18503CF20](a1: v8, a2: v9, a3: v10, a4: v7, a5: v4);
  if ( *(int *)(v5 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v14;
}
