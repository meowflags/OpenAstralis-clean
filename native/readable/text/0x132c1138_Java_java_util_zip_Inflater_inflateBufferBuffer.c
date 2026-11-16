// Java_java_util_zip_Inflater_inflateBufferBuffer
// rva 0x132c1138  size 126  section .text  group text
// window base 0x1932c1138: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Inflater_inflateBufferBuffer(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13)
{
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v17; // eax
  int v18; // edi
  int v19; // esi
  __int64 v21; // [rsp+48h] [rbp+10h]

  v21 = v14;
  *(_QWORD *)(a5 + 16) = a12;
  *(_QWORD *)a5 = a6;
  *(_DWORD *)(a5 + 8) = a11;
  *(_DWORD *)(a5 + 24) = a13;
  v17 = sub_132C4558(a1: a11, a2: a5, a3: 1, a4: a5, a5, a6);
  return sub_132C1770(a1, a2, a3, a4, a5: v19, a6: v18, a7: v13, a8: v21, a9: a2, a10: a1, a11: a13, a12: v17);
}
