// sub_4F22180
// rva 0x04f22180  size 266  section .text  group text
// window base 0x184f22180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F22180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  char v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]
  __int64 v13; // [rsp+18h] [rbp-10h]
  __int64 v14; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v14 = a6;
    v13 = a5;
    v12 = a3;
    sub_1EB84E0();
  }
  else if ( *(_BYTE *)(v6 + 376747154) == 0 )
  {
    goto LABEL_3;
  }
  v14 = a6;
  v13 = a5;
  v12 = a3;
  sub_15ACE20(a1, a2, a3: v6 + 36253608);
  a6 = v14;
  a5 = v13;
  a3 = v12;
LABEL_3:
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v8 + 40) > *(_QWORD *)(v7 + 32) )
  {
    v14 = a6;
    v13 = a5;
    v12 = a3;
    v8 = sub_1EAA920(a1: v8, a2, a3: 36253608);
    a6 = v14;
    a5 = v13;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v8 + 40;
    *(_DWORD *)v8 = 36253608;
    *(_DWORD *)(v8 + 4) = 0;
    *(_QWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 32) = 0;
    v12 = a3;
  }
  v11 = v8;
  v13 = a5;
  v14 = a6;
  sub_4F223A0(a1: 1, a2, a3: v8, a4: a5, a5, a6, a7: v10);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return v11;
}
