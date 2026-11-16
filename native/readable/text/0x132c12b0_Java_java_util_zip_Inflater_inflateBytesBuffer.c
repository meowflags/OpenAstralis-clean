// Java_java_util_zip_Inflater_inflateBytesBuffer
// rva 0x132c12b0  size 251  section .text  group text
// window base 0x1932c12b0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Inflater_inflateBytesBuffer(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        int a14)
{
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // edi
  int v30; // esi

  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1776LL))(
          a1,
          a2,
          a3: a6,
          a4,
          a5: 0);
  v23 = v18;
  if ( v18 != 0 )
  {
    *(_QWORD *)a5 = v18 + a11;
    *(_QWORD *)(a5 + 16) = a13;
    *(_DWORD *)(a5 + 8) = a12;
    *(_DWORD *)(a5 + 24) = a14;
    sub_132C4558(a1: a14, a2: a12, a3: 1, a4: a5, a5: v21, a6: v22);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1784LL))(
      a1: v27,
      a2: v28,
      a3: a6,
      a4,
      a5: v23,
      a6: 0);
    return sub_132C1770(a1: v29, a2: v30, a3, a4, a5, a6: v30);
  }
  else
  {
    if ( a12 != 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
           a1: v19,
           a2: v20,
           a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
           a4) == 0 )
    {
      JNU_ThrowOutOfMemoryError(a1: v24, a2: v25, a3: 0, a4);
    }
    return 0;
  }
}
