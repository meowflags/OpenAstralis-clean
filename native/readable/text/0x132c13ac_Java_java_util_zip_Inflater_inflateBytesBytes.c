// Java_java_util_zip_Inflater_inflateBytesBytes
// rva 0x132c13ac  size 361  section .text  group text
// window base 0x1932c13ac: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Inflater_inflateBytesBytes(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        __int64 a13,
        int a14,
        int a15)
{
  __int64 v18; // rbp
  __int64 v19; // rdi
  __int64 v20; // rsi
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  int v35; // edi
  int v36; // esi

  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1776LL))(
          a1,
          a2,
          a3: a6,
          a4,
          a5: 0);
  if ( v18 != 0 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1776LL))(
            a1: v19,
            a2: v20,
            a3: a13,
            a4,
            a5: 0);
    v27 = v22;
    if ( v22 != 0 )
    {
      *(_QWORD *)a5 = v18 + a11;
      *(_DWORD *)(a5 + 8) = a12;
      *(_QWORD *)(a5 + 16) = v22 + a14;
      *(_DWORD *)(a5 + 24) = a15;
      sub_132C4558(a1: a15, a2: a12, a3: 1, a4: a5, a5: v25, a6: v26);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1784LL))(
        a1: v31,
        a2: v32,
        a3: a13,
        a4,
        a5: v27,
        a6: 0);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1784LL))(
        a1: v33,
        a2: v34,
        a3: a6,
        a4,
        a5: v18,
        a6: 0);
      return sub_132C1770(a1: v35, a2: v36, a3, a4, a5, a6: v36);
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1784LL))(
      a1: v23,
      a2: v24,
      a3: a6,
      a4,
      a5: v18,
      a6: 0);
    v21 = a15 == 0;
  }
  else
  {
    v21 = a12 == 0;
  }
  if ( !v21
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
         a1: v19,
         a2: v20,
         a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
         a4) == 0 )
  {
    JNU_ThrowOutOfMemoryError(a1: v28, a2: v29, a3: 0, a4);
  }
  return 0;
}
