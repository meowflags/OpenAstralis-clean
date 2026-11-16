// Java_java_util_zip_Deflater_deflateBufferBuffer
// rva 0x132c0954  size 157  section .text  group text
// window base 0x1932c0954: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Deflater_deflateBufferBuffer(
        int a1,
        int a2,
        __int64 a3,
        int a4,
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
        int a15)
{
  int v15; // ebx
  int v16; // ebp
  int v17; // ebx
  int v19; // eax
  int v20; // edi
  int v21; // esi
  int v23; // [rsp+40h] [rbp+8h]

  v23 = v15;
  v17 = a5;
  *(_QWORD *)(a5 + 16) = a12;
  *(_QWORD *)a5 = a6;
  *(_DWORD *)(a5 + 8) = a11;
  *(_DWORD *)(a5 + 24) = a13;
  if ( (a15 & 1) != 0 )
    v19 = sub_132C3588(a1: a15, a2: a11, a3: a15 >> 3, a4: a5, a5: (a15 >> 1) & 3, a6);
  else
    v19 = sub_132C2690(a1: a15, a2: a11, a3: a14, a4: a5, a5, a6);
  return sub_132C1050(a1, a2, a3: v17, a4, a5: v21, a6: a13, a7: v23, a8: v16, a9: a2, a10: a1, a11: v20, a12: v19);
}
