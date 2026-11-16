// sub_132BEBC8
// rva 0x132bebc8  size 233  section .text  group text
// window base 0x1932bebc8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132BEBC8(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  __int64 v15[4]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v6 = *(_QWORD *)(a3 + 56);
  v7 = 0;
  v8 = a3;
  if ( v6 <= 0 )
  {
    v10 = sub_132C0524(
            a1: 0,
            a2: a3,
            a3: (unsigned int)v16,
            a4: *(_QWORD *)(a4 + 48),
            a5: 30,
            a6: -(int)v6,
            a7: v15[0],
            a8: v15[1]);
    a3 = -1;
    if ( v10 == -1 )
    {
      *(_QWORD *)(a4 + 80) = 547480;
    }
    else
    {
      v11 = v7;
      v12 = v7;
      LOBYTE(v12) = v16[1] == 75;
      LOBYTE(v11) = v16[0] == 80;
      v13 = v11 & v12;
      if ( v16[2] != 3 )
        JUMPOUT(0x326518C4BLL);
      LOBYTE(v7) = v16[3] == 4;
      if ( (v13 & (unsigned int)v7) != 0 )
      {
        a3 = v16[26] | (unsigned __int64)(v16[27] << 8);
        *(_QWORD *)(v8 + 56) = a3 + ((v16[29] << 8) | (unsigned __int64)v16[28]) - *(_QWORD *)(v8 + 56) + 30;
      }
      else
      {
        *(_QWORD *)(a4 + 80) = 547504;
      }
    }
  }
  return sub_132C8DE0(a1: v7, a2: v8, a3, a4: (unsigned __int64)v15 ^ v17, a5, a6);
}
