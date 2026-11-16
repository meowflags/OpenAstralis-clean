// sub_181593A40
// rva 0x01593a40  size 312  section .text  group text
// window base 0x181593a40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181593A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, char *a6)
{
  __int64 result; // rax
  _BYTE *v7; // [rsp+10h] [rbp-28h]
  unsigned int v8; // [rsp+1Ch] [rbp-1Ch]
  _QWORD *v9; // [rsp+28h] [rbp-10h]

  v9 = a5;
  if ( *a6 == 115 )
  {
    v8 = 115;
    v7 = a6 + 1;
    if ( (unsigned int)sub_1815939C0(a1, a2, a3: a6 + 1, a4: (__int64)(a6 + 1), a5) != 0 )
    {
      result = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(result + 32) = *v9;
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 136LL) = 0;
      return result;
    }
    a5 = v9;
  }
  else
  {
    v7 = a6 + 1;
    v8 = *a6;
  }
  if ( v8 == 120 )
  {
    if ( (unsigned int)sub_1815939C0(a1, a2, a3: v7, a4: (__int64)a5, a5) != 0 )
    {
      result = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(result + 16) = *v9;
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 120LL) = 0;
      return result;
    }
    result = 120;
    a5 = v9;
  }
  else
  {
    result = v8;
  }
  if ( (_DWORD)result == 110 )
  {
    result = sub_1815939C0(a1, a2, a3: v7, a4: (__int64)a5, a5);
    if ( (_DWORD)result != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 24LL) = *v9;
      result = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(result + 128) = 0;
    }
  }
  return result;
}
