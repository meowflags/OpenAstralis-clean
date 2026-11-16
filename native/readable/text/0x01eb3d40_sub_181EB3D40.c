// sub_1EB3D40
// rva 0x01eb3d40  size 319  section .text  group text
// window base 0x181eb3d40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB3D40(int a1, int a2, _DWORD *a3, __int64 a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  char v12; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+8h] [rbp-10h]
  _DWORD *v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, (_DWORD)a3, a4, (_DWORD)a5, a6, a7: v12);
    __builtin_debugtrap();
    return sub_1EB3E80();
  }
  else if ( a5 == a3 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v14 = a5;
      v13 = a3;
      sub_277F280();
    }
    return 1;
  }
  else if ( a5 != v6 && *a5 >> 3 == 5058262 )
  {
    if ( a3[1] == a5[1] )
    {
      if ( a3[3] == a5[3] )
      {
        v9 = (unsigned int)a3[2];
        v10 = (unsigned int)a5[2];
        if ( (_DWORD)v10 == (_DWORD)v9 )
        {
          result = 1;
        }
        else if ( (_DWORD)v9 != 0 )
        {
          if ( (_DWORD)v10 != 0 )
          {
            v11 = (unsigned int)v6[2 * v9 + 2];
            if ( (_DWORD)v11 == v6[2 * v10 + 2] )
            {
              v14 = a5;
              v13 = a3;
              result = sub_282FE00(a1: 12, a2: v11, a3: &v6[2 * v9], a4, a5: 12, a6: &v6[2 * v10]);
              a5 = v14;
              a3 = v13;
            }
            else
            {
              result = 0;
            }
          }
          else
          {
            result = 0;
          }
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v14 = a5;
      v13 = a3;
      return sub_277F280();
    }
  }
  else
  {
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v14 = a5;
      v13 = a3;
      sub_277F280();
    }
    return 0;
  }
  return result;
}
