// sub_18277D820
// rva 0x0277d820  size 139  section .text  group text
// window base 0x18277d820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277D820(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v15; // [rsp+10h] [rbp-18h]

  v5 = *(_DWORD *)(v4 + 320);
  v6 = v5 - 1;
  *(_DWORD *)(v4 + 320) = v6;
  MEMORY[0x181EB82C0](a1, a2, a3: v5, a4: v6, a5: (unsigned int)v6);
  v9 = *(unsigned int *)(v4 + 72);
  if ( (_DWORD)v9 != 0 )
  {
    v10 = *(unsigned int *)(v3 + 8 * v9 + 72);
    if ( (_DWORD)v10 != 0 )
      v11 = v3 + 8 * v10;
    else
      v11 = v3 + 8 * v9;
  }
  else
  {
    v11 = v3;
  }
  v15 = v11;
  sub_182780500(a1: v7, a2: v8, a3: v3 + 376658360, a4: v15, a5: a3, a6: v15);
  return sub_18277D8C0(a1: v12, a2: v13, a3: v15);
}
