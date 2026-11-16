// sub_132B8CEC
// rva 0x132b8cec  size 161  section .text  group text
// window base 0x1932b8cec: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B8CEC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi

  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 808LL))(
         a1,
         a2: a3,
         a3,
         a4,
         a5: __imp_KERNEL32.dll!CloseHandle);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 1824LL))(
             a1: v5,
             a2: v7,
             a3: v6,
             a4);
  if ( (_BYTE)result == 0 && v9 != -1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 880LL))(
      a1: v9,
      a2: v10,
      a3: v10,
      a4,
      a5: MEMORY[0x337f90]/* 0x337f90 */);
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
               a1: v11,
               a2: v12,
               a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
               a4);
    if ( (_BYTE)result == 0 )
    {
      result = MEMORY[0x797c8]/* 0x797c8 */(a1: v14, a2: v15, a3: v13, a4: v14);
      if ( (_DWORD)result == 0 )
        return JNU_ThrowIOExceptionWithLastError(a1: v16, a2: v17, a3: 543528, a4);
    }
  }
  return result;
}
