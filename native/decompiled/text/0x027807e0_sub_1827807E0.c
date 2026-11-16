// sub_1827807E0
// rva 0x027807e0  size 314  section .text  group text
// window base 0x1827807e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827807E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // r8d
  int v25; // r9d

  MEMORY[0x10E44720](a1, a2, a3: v16 + 80, a4: v16 + 80);
  *(_DWORD *)(v16 + 328) = 2;
  MEMORY[0x10E44490](a1: v18, a2: v19, a3: v17, a4: v16 + 176);
  if ( *(_DWORD *)(v16 + 328) == 2 )
    return sub_182780857(
             a1: v22,
             a2: v23,
             a3: v20,
             a4: v21,
             a5: v24,
             a6: v25,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16);
  else
    return MEMORY[0x10E44D58](a1: v22, a2: v23, a3: v20, a4: v16 + 80);
}
