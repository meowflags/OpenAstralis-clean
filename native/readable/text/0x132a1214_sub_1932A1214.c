// sub_132A1214
// rva 0x132a1214  size 253  section .text  group text
// window base 0x1932a1214: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A1214(
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
        unsigned int a11)
{
  __int64 v11; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi

  v11 = a6;
  v14 = 0;
  while ( (unsigned int)__imp_KERNEL32.dll!FlushViewOfFile(a1: v14, a2: v11, a3: a11, a4: v11) == 0 )
  {
    if ( (unsigned int)__imp_KERNEL32.dll!GetLastError() == 33 )
    {
      v14 = (unsigned int)(v14 + 1);
      if ( (int)v14 < 5 )
        continue;
    }
    return JNU_ThrowIOExceptionWithLastError(a1: v14, a2: v11, a3: 534456, a4);
  }
  if ( __imp_KERNEL32.dll!FlushFileBuffers != 0
    || (result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(
                   a1: v15,
                   a2: v16,
                   a3: 534416,
                   a4)) != 0
    && (result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
                   a1: v18,
                   a2: v19,
                   a3: result,
                   a4,
                   a5: 534444,
                   a6: 534440),
        __imp_KERNEL32.dll!GetLastError = result,
        result != 0) )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 808LL))(
            a1: v15,
            a2: v16,
            a3: a5,
            a4);
    result = MEMORY[0x79790]/* 0x79790 */(a1: v22, a2: v23, a3: v21, a4: v20);
    if ( (_DWORD)result == 0 )
    {
      result = MEMORY[0x79758]/* 0x79758 */();
      if ( (_DWORD)result != 5 )
        return JNU_ThrowIOExceptionWithLastError(a1: v14, a2: v11, a3: 534456, a4);
    }
  }
  return result;
}
