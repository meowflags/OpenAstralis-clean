// Java_java_util_zip_Deflater_setDictionary
// rva 0x132c0f3c  size 182  section .text  group text
// window base 0x1932c0f3c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_zip_Deflater_setDictionary(
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
        int a12)
{
  __int64 result; // rax
  int v15; // edi
  int v16; // esi
  int v17; // r9d
  __int64 v18; // rbp
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1776LL))(
             a1,
             a2: a5,
             a3: a6,
             a4,
             a5: 0);
  v18 = result;
  if ( result != 0 )
  {
    v19 = sub_132C37CC(a1: v15, a2: v16, a3: (int)result + a11, a4: v16, a5: a12, a6: v17);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1784LL))(
               a1: v19,
               a2: v20,
               a3: a6,
               a4,
               a5: v18,
               a6: 0);
    if ( (_DWORD)v21 == -2 )
    {
      return JNU_ThrowIllegalArgumentException(a1: v21, a2: v22, a3: 0, a4);
    }
    else if ( (_DWORD)v21 != 0 )
    {
      if ( *(_QWORD *)(v22 + 32) == 0 )
        JUMPOUT(0x32651AFC6LL);
      return JNU_ThrowInternalError(a1: v21, a2: v22, a3: *(_QWORD *)(v22 + 32), a4, a5: v23);
    }
  }
  return result;
}
