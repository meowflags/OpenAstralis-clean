// sub_50350C0
// rva 0x050350c0  size 377  section .text  group text
// window base 0x1850350c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50350C0(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  int v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]
  __int64 v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]
  int v15; // [rsp+20h] [rbp-8h]
  int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v16 = a2;
    v15 = a1;
    v13 = a6;
    v12 = a3;
    sub_1EB84E0();
LABEL_19:
    v16 = a2;
    v15 = a1;
    v13 = a6;
    v12 = a3;
    sub_2771080();
    goto LABEL_20;
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v6) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a4 = a3 & 0xFFF80000;
    v9 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v9) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v9) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(a3 + 8) = (unsigned __int64)(a6 - v6) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a4 = a3 & 0xFFF80000;
    v10 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) = 0;
  }
  *(_DWORD *)(a3 + 20) = a1;
  __faststorefence();
  if ( a2 != 0 )
  {
    *(_BYTE *)(a3 + 32) = 1;
    __faststorefence();
  }
  v14 = a5;
  if ( *(int *)(v6 + 376195788) >= 4 )
  {
    if ( a5 != v6 )
    {
      v16 = a2;
      v15 = a1;
      v13 = a6;
      v12 = a3;
      result = sub_5035CE0(a1, a2, a3: a5, a4, a5: a3, a6, a7: v11);
      goto LABEL_9;
    }
    goto LABEL_19;
  }
  v16 = a2;
  v15 = a1;
  v13 = a6;
  v12 = a3;
  if ( a5 == v6 )
  {
LABEL_20:
    sub_2771080();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_5035240();
  }
  result = sub_50354E0(a1, a2, a3: a5, a4, a5: v12, a6, a7: v11);
LABEL_9:
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
