// Java_java_util_zip_Deflater_init
// rva 0x132c0e14  size 249  section .text  group text
// window base 0x1932c0e14: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Deflater_init(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        char a11)
{
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v24; // rdi
  __int64 v25; // rsi

  v12 = __imp_api-ms-win-crt-heap-l1-1-0.dll!calloc(a1: a6, a2: a4, a3: 88, a4: 1);
  if ( v12 == 0 )
    goto LABEL_12;
  v15 = sub_132C32EC(a1: v13, a2: v14, a3: a5, a4: v12, a5: 8, a6: a11 != 0 ? -15 : 15);
  switch ( v15 )
  {
    case -4:
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v17, a2: v18, a3: v16, a4: v12);
LABEL_12:
      JNU_ThrowOutOfMemoryError(a1: v13, a2: v14, a3: 0, a4: v14);
      return 0;
    case -2:
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v17, a2: v18, a3: v16, a4: v12);
      JNU_ThrowIllegalArgumentException(a1: v24, a2: v25, a3: 0, a4: v25);
      break;
    case 0:
      return v12;
    default:
      v19 = *(_QWORD *)(v12 + 32);
      if ( v19 == 0 )
      {
        if ( v15 != -6 )
          JUMPOUT(0x32651AEB3LL);
        v19 = 548160;
      }
      __imp_api-ms-win-crt-heap-l1-1-0.dll!free(a1: v19, a2: v18, a3: v16, a4: v12);
      JNU_ThrowInternalError(a1: v20, a2: v21, a3: v20, a4: v21, a5: v22);
      break;
  }
  return 0;
}
