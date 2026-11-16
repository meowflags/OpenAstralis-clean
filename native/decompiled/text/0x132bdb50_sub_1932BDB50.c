// sub_1932BDB50
// rva 0x132bdb50  size 334  section .text  group text
// window base 0x1932bdb50: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BDB50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
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
      if ( (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545616) != 0 )
      {
        if ( (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545632) != 0 )
        {
          if ( (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545640) != 0 )
          {
            if ( (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545648) != 0 )
            {
              if ( (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545656) != 0 )
              {
                if ( (unsigned int)sub_1932CA1F7(a1: v8, a2: v9, a3: v8, a4: 545660) == 0 )
                  v5 = 32769;
              }
              else
              {
                v5 = 32771;
              }
            }
            else
            {
              v5 = 32782;
            }
          }
          else
          {
            v5 = 32781;
          }
        }
        else
        {
          v5 = 32780;
        }
      }
      else
      {
        v5 = 32776;
      }
    }
    else
    {
      v5 = 32772;
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
