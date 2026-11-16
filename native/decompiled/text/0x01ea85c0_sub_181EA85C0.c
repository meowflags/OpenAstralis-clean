// sub_181EA85C0
// rva 0x01ea85c0  size 203  section .text  group text
// window base 0x181ea85c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA85C0(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx

  v11 = *(_QWORD *)(v10 + 376653752);
  v12 = *(unsigned int *)(v10 + 376654972);
  v13 = v11 + (*(_QWORD *)(v10 + 376653760) << 19);
  v14 = v13 + *a5;
  if ( (_DWORD)v12 == 0 )
    return sub_181EA8665(a1, a2, a3: v13, a4: v11, (_DWORD)a5, a6, a7, a8, a9, a10);
  v15 = *(_DWORD *)(v10 + 8 * v12) >> 3;
  v16 = *(unsigned int *)(v10 + 8 * v15 + 44);
  v17 = (unsigned int)v16 & (0x207u >> HIBYTE(*(_DWORD *)(v10 + 8 * v15 + 44)));
  if ( (unsigned __int16)*(_DWORD *)(v10 + 8LL * *(unsigned int *)(v10 + 8 * v15 + 20) + 4 * v17 + 12) != 519 )
    JUMPOUT(0x181EA8674LL);
  v18 = *(unsigned int *)(v10 + 8 * v12 + 8);
  if ( (_DWORD)v18 == 0 )
    JUMPOUT(0x181EA8685LL);
  return v14 <= sub_181E9F640(a1: v17, a2: v16, a3: v10 + 8 * v18);
}
