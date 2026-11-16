// sub_1932BDF38
// rva 0x132bdf38  size 258  section .text  group text
// window base 0x1932bdf38: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BDF38(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v10; // r15d
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdi
  _BYTE *v14; // rsi
  int v15; // edx
  int i; // r8d

  v10 = 0xFFFFFFFF;
  v11 = (*(__int64 (**)(void))(*(_QWORD *)a4 + 1368LL))();
  v14 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1472LL))(
                   a1: v11,
                   a2: v12,
                   a3,
                   a4,
                   a5: 0);
  if ( v14 != nullptr )
  {
    v15 = v13;
    if ( (int)v13 > a6 )
    {
      if ( (_DWORD)v13 != a6 + 1 || *v14 != 0 )
        goto LABEL_12;
      v15 = v13 - 1;
    }
    for ( i = 0; i < v15; ++i )
      *(_BYTE *)(i + a5) = v14[(int)v13 - i - 1];
    if ( v15 < a6 )
      sub_1932CA161(a1: v13, a2: v14, a3: 0, a4: a5 + v15, a5: a6 - v15);
    v10 = a6;
  }
LABEL_12:
  if ( v14 != nullptr )
    (*(void (__fastcall **)(__int64, _BYTE *, __int64, __int64, _BYTE *, __int64))(*(_QWORD *)a4 + 1536LL))(
      a1: v13,
      a2: v14,
      a3,
      a4,
      a5: v14,
      a6: 2);
  return v10;
}
