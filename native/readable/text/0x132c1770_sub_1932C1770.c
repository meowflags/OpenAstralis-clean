// sub_132C1770
// rva 0x132c1770  size 301  section .text  group text
// window base 0x1932c1770: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C1770(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12)
{
  __int64 v12; // rbx
  int v16; // edi
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // edi
  int v22; // esi

  v12 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  switch ( a12 )
  {
    case -5:
      return v16 | ((v17 | ((v12 | (2 * v18)) << 31)) << 31);
    case -4:
      JNU_ThrowOutOfMemoryError(a1: 0, a2: 0, a3: 0, a4);
      goto LABEL_13;
    case -3:
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 872LL))(
        a1: (unsigned int)(a6 - *(_DWORD *)(a5 + 8)),
        a2: 0,
        a3,
        a4,
        a5: MEMORY[0x3377a0]/* 0x3377a0 */,
        a6: (unsigned int)(a6 - *(_DWORD *)(a5 + 8)));
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a4 + 872LL))(
        a1: v20,
        a2: (unsigned int)(a11 - *(_DWORD *)(a5 + 24)),
        a3,
        a4,
        a5: MEMORY[0x3377a8]/* 0x3377a8 */,
        a6: (unsigned int)(a11 - *(_DWORD *)(a5 + 24)));
      JNU_ThrowByName(a1: v21, a2: v22, a3: 548552, a4, a5: *(_QWORD *)(a5 + 32));
      goto LABEL_13;
    default:
      break;
  }
  v19 = 0;
  if ( a12 == 0 )
  {
LABEL_10:
    v16 = a6 - *(_DWORD *)(a5 + 8);
    v18 = 0;
    v17 = a11 - *(_DWORD *)(a5 + 24);
    v12 = v19;
    return v16 | ((v17 | ((v12 | (2 * v18)) << 31)) << 31);
  }
  v18 = 1;
  if ( a12 == 1 )
  {
    v19 = 1;
    goto LABEL_10;
  }
  if ( a12 != 2 )
  {
    JNU_ThrowInternalError(a1: 0, a2: 0, a3: *(_QWORD *)(a5 + 32), a4, a5);
LABEL_13:
    v18 = 0;
    return v16 | ((v17 | ((v12 | (2 * v18)) << 31)) << 31);
  }
  v16 = a6 - *(_DWORD *)(a5 + 8);
  v17 = a11 - *(_DWORD *)(a5 + 24);
  return v16 | ((v17 | ((v12 | (2 * v18)) << 31)) << 31);
}
