// sub_18275A160
// rva 0x0275a160  size 235  section .text  group text
// window base 0x18275a160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18275A160(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int *a5, int a6)
{
  unsigned int *v6; // r14
  __int64 v7; // r15
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  char v18; // [rsp+0h] [rbp-28h] BYREF
  unsigned int *v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_11:
    sub_182771080(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v18);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18275A260(a1: v16, a2: v17, a3: v14, a4: v15);
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)((char *)a5 - (char *)v6) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a4 = a3 & 0xFFF80000;
    v13 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) = 0;
  }
  if ( a5 == v6 )
    goto LABEL_11;
  v20 = a3;
  v8 = a5[17] & 0x7FFFFFF;
  if ( (a5[17] & 0x10) != 0 )
    JUMPOUT(0x304EA31B0LL);
  *(_BYTE *)(a3 + 16) = 0;
  v21 = v8;
  v19 = a5;
  result = sub_182757C20(a1, a2, a3: a5, a4: 0, (int)a5, a6, a7: v18);
  v12 = v20;
  *(_QWORD *)(v20 + 8) = result;
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1: v10, a2: v11, a3: v12);
  return result;
}
