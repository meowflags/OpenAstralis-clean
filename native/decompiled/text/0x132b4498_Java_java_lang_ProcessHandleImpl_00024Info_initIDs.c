// Java_java_lang_ProcessHandleImpl_00024Info_initIDs
// rva 0x132b4498  size 298  section .text  group text
// window base 0x1932b4498: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_lang_ProcessHandleImpl_00024Info_initIDs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
             a1: a3,
             a2,
             a3,
             a4,
             a5: 543888,
             a6: 535736);
  MEMORY[0x337638] = result;
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
               a1: v6,
               a2: v7,
               a3: v6,
               a4,
               a5: 543896,
               a6: 535736);
    MEMORY[0x337640] = result;
    if ( result != 0 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
                 a1: v8,
                 a2: v9,
                 a3: v8,
                 a4,
                 a5: 543936,
                 a6: 543912);
      MEMORY[0x337648] = result;
      if ( result != 0 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
                   a1: v10,
                   a2: v11,
                   a3: v10,
                   a4,
                   a5: 543952,
                   a6: 534440);
        MEMORY[0x337650] = result;
        if ( result != 0 )
        {
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
                     a1: v12,
                     a2: v13,
                     a3: v12,
                     a4,
                     a5: 543968,
                     a6: 534440);
          MEMORY[0x337658] = result;
          if ( result != 0 )
          {
            result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 752LL))(
                       a1: v14,
                       a2: v15,
                       a3: v14,
                       a4,
                       a5: 543980,
                       a6: 535736);
            MEMORY[0x337660] = result;
          }
        }
      }
    }
  }
  return result;
}
