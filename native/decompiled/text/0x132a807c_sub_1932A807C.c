// sub_1932A807C
// rva 0x132a807c  size 219  section .text  group text
// window base 0x1932a807c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A807C(_DWORD a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  int v10; // edi
  int v11; // esi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  int v22; // ebx

  if ( a5 <= 0 )
  {
    sub_1932A85F8(a1: a4, a2, a3, a4: 87);
    return 0xFFFFFFFFLL;
  }
  if ( (int)sub_1932A8620(a1: a4, a2) < 0 )
    return 0xFFFFFFFFLL;
  v14 = sub_1932A99CC(a1: v10, a2: v11, a3: v10, a4: 3372216, a5: v12, a6: v13);
  if ( v14 == 0 )
  {
    sub_1932A85F8(a1: v16, a2: 0, a3: v15, a4: 87);
LABEL_11:
    sub_1932A85AC(a1: v18, a2: v19, a3: v17, a4: v18, a5: v20, a6: v21);
    return 0xFFFFFFFFLL;
  }
  v22 = sub_1932A8F10(a1: v16, a2: v14, a3, a4: v14 - 64, (unsigned int)a5, a6);
  v17 = v19 + 40;
  if ( __sync_sub_and_fetch((volatile signed __int32 *)(v19 + 40), 1) == 0x10000000
    && (unsigned int)MEMORY[0x3374A0](a1: v18, a2: v19, a3: v17, a4: MEMORY[0x3374D8], a5: 0, a6: 0) != 0 )
  {
    MEMORY[0x79B28]();
    __builtin_debugtrap();
  }
  if ( v22 < 0 )
    goto LABEL_11;
  return (unsigned int)v22;
}
