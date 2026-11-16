// Java_java_util_zip_Deflater_deflateBufferBytes
// rva 0x132c09f4  size 288  section .text  group text
// window base 0x1932c09f4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Deflater_deflateBufferBytes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // edi
  int v29; // esi

  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1776LL))(
          a1: a4,
          a2: a6,
          a3: a12,
          a4,
          a5: 0);
  v22 = v17;
  if ( v17 != 0 )
  {
    *(_QWORD *)a5 = v19;
    *(_QWORD *)(a5 + 16) = v17 + a13;
    *(_DWORD *)(a5 + 8) = a11;
    *(_DWORD *)(a5 + 24) = a14;
    if ( (a16 & 1) != 0 )
      sub_132C3588(a1: v18, a2: a16, a3: a16 >> 3, a4: a5, a5: (a16 >> 1) & 3, a6: v21);
    else
      sub_132C2690(a1: v18, a2: a16, a3: a15, a4: a5, a5: v20, a6: v21);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v26 + 1784LL))(
      a1: v26,
      a2: v27,
      a3: a12,
      a4: v26,
      a5: v22,
      a6: 0);
    return sub_132C1050(a1: v28, a2: v29, a3: a5, a4: v28, a5: a11, a6: a14);
  }
  else
  {
    if ( a14 != 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v18 + 1824LL))(
           a1: v18,
           a2: v19,
           a3: *(_QWORD *)(*(_QWORD *)v18 + 1824LL),
           a4: v18) == 0 )
    {
      JNU_ThrowOutOfMemoryError(a1: v23, a2: v24, a3: 0, a4: v23);
    }
    return 0;
  }
}
