// sub_132C9694
// rva 0x132c9694  size 152  section .text  group text
// window base 0x1932c9694: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
bool __fastcall sub_132C9694(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  _DWORD *v7; // rdx
  _DWORD *v8; // r9
  unsigned __int64 v9; // rcx

  if ( MEMORY[0xfffffffe6cda6000]/* 0xfffffffe6cda6000 */ != 23117 )
    return false;
  v5 = MEMORY[0xfffffffe6cda603c]/* 0xfffffffe6cda603c */ - 321232896LL;
  if ( *(_DWORD *)v5 != 17744 || *(_WORD *)(v5 + 24) != 523 )
    return false;
  v6 = a4 + 321232896;
  v7 = (_DWORD *)(v5 + *(unsigned __int16 *)(v5 + 20) + 24LL);
  v8 = &v7[10 * *(unsigned __int16 *)(v5 + 6)];
  while ( v7 != v8 )
  {
    v9 = (unsigned int)v7[3];
    if ( v6 >= v9 && v6 < (unsigned int)(v9 + v7[2]) )
      return v7 != nullptr && v7[9] >= 0;
    v7 += 10;
  }
  v7 = nullptr;
  return v7 != nullptr && v7[9] >= 0;
}
