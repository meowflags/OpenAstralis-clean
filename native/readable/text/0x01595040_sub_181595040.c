// sub_1595040
// rva 0x01595040  size 125  section .text  group text
// window base 0x181595040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1595040(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // rax
  _BYTE v8[16]; // [rsp+10h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+28h] [rbp-10h]
  _QWORD *v11; // [rsp+30h] [rbp-8h]

  v11 = a3;
  v10 = a5;
  v9 = (__int64 *)v8;
  result = sub_1E7F660(a1, a2, a3: v5 + 376612536, a4, a5: v8, a6: a5);
  if ( (_DWORD)result == 0 )
  {
    v7 = *v9;
    if ( *v9 == 0 )
    {
      result = 2;
      goto LABEL_5;
    }
    if ( (v7 & 0x7FFFF) != 0 )
    {
      result = 34;
LABEL_5:
      *v11 = 0;
      return result;
    }
    *v11 = v7;
    return 0;
  }
  return result;
}
