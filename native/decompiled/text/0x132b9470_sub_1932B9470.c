// sub_1932B9470
// rva 0x132b9470  size 244  section .text  group text
// window base 0x1932b9470: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B9470(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d

  v6 = sub_1932B9260(a1: a3, a2: a4, a3, a4, a5: 1);
  if ( v6 == 0 )
    return -1;
  if ( (a5 & 0x200) == 0 )
    JUMPOUT(0x326513508LL);
  if ( (a5 & 1) == 0 )
    JUMPOUT(0x32651351CLL);
  v10 = MEMORY[0x797B0](a1: v7, a2: v8, a3: 0x40000000, a4: v6, a5: 3, a6: 0);
  MEMORY[0x79AE0](a1: v12, a2: v13, a3: v11, a4: v6);
  if ( v10 == -1 )
  {
    sub_1932B9738(a1: v14, a2: v15, a3: v14, a4: v15, a5: v16, a6: v17);
    return -1;
  }
  return v10;
}
