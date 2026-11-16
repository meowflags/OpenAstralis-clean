// sub_181EBBCC0
// rva 0x01ebbcc0  size 130  section .text  group text
// window base 0x181ebbcc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBBCC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  signed __int32 v8; // ett

  *(_BYTE *)(a3 + 12) = 0;
  result = sub_181EBBE40(a1, a2, a3: v3 + 8LL * *(unsigned int *)(a3 + 4));
  if ( (_DWORD)result != 0 )
  {
    v5 = a3;
  }
  else
  {
    v5 = a3;
    result = *(unsigned int *)(a3 + 4);
    if ( (*(_DWORD *)(v3 + 8 * result) & 1) == 0 )
    {
      v6 = 8 * result;
      if ( v6 != 0 )
        v6 += v3;
      v7 = v6 & 0xFFFFFFFFFFF80000LL;
      do
      {
        v8 = *(_DWORD *)(v7 + 44);
        result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 44), v8, v8 - 1);
      }
      while ( v8 != (_DWORD)result );
    }
  }
  *(_DWORD *)(v5 + 4) = 0;
  return result;
}
