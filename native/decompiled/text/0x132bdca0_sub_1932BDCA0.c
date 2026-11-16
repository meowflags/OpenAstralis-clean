// sub_1932BDCA0
// rva 0x132bdca0  size 250  section .text  group text
// window base 0x1932bdca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BDCA0(__int64 a1, _DWORD a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi

  v5 = 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1352LL))(
             a1,
             a2: a4,
             a3,
             a4,
             a5: 0);
  if ( result != 0 )
  {
    if ( (unsigned int)sub_1932CA1F7(a1: result, a2: v7, a3: result, a4: 545592) != 0
      && (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545596) != 0
      && (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545604) != 0 )
    {
      if ( (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545632) != 0 )
      {
        if ( (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545640) != 0 )
        {
          if ( (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545648) == 0 )
            v5 = 545712;
        }
        else
        {
          v5 = 545696;
        }
      }
      else
      {
        v5 = 545680;
      }
    }
    else
    {
      v5 = 545664;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 1360LL))(
      a1: v8,
      a2: v9,
      a3,
      a4: v9,
      a5: v8);
    return v5;
  }
  return result;
}
