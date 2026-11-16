// sub_1932C7624
// rva 0x132c7624  size 275  section .text  group text
// window base 0x1932c7624: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int16 __fastcall sub_1932C7624(_DWORD a1, _DWORD a2, __int64 a3, _WORD *a4, int a5)
{
  _UNKNOWN **v5; // rax
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // r9d
  unsigned __int16 *v9; // rsi
  __int64 v10; // rbp
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r10
  int v14; // r11d
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  v5 = &retaddr;
  v6 = *(unsigned __int16 *)(a3 + 2);
  v7 = -1;
  v8 = 0;
  *(_WORD *)(a3 + 4LL * a5 + 6) = -1;
  if ( a5 >= 0 )
  {
    v9 = (unsigned __int16 *)(a3 + 6);
    v10 = a5 + 1LL;
    v11 = (_WORD)v6 != 0 ? 7 : 138;
    LOWORD(v5) = -(__int16)v6;
    v12 = ((_WORD)v6 != 0) + 3;
    do
    {
      ++v8;
      v13 = v6;
      v14 = v6;
      v6 = *v9;
      if ( v8 >= v11 || (_DWORD)v13 != v6 )
      {
        if ( v8 >= v12 )
        {
          if ( (_DWORD)v13 != 0 )
          {
            if ( v14 != v7 )
              ++a4[2 * v13 + 1362];
            ++a4[1394];
          }
          else if ( v8 > 10 )
          {
            ++a4[1398];
          }
          else
          {
            ++a4[1396];
          }
        }
        else
        {
          a4[2 * v13 + 1362] += v8;
        }
        v8 = 0;
        v7 = v14;
        if ( v6 != 0 )
        {
          if ( (_DWORD)v13 == v6 )
          {
            v12 = 3;
            v11 = 6;
          }
          else
          {
            v12 = 4;
            v11 = 7;
          }
        }
        else
        {
          v12 = 3;
          v11 = 138;
        }
      }
      v9 += 2;
      --v10;
    }
    while ( v10 != 0 );
  }
  return (__int16)v5;
}
