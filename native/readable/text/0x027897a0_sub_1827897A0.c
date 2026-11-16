// sub_27897A0
// rva 0x027897a0  size 315  section .text  group text
// window base 0x1827897a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27897A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  _QWORD v22[2]; // [rsp+0h] [rbp-258h] BYREF
  _BYTE v23[528]; // [rsp+10h] [rbp-248h] BYREF
  _DWORD v24[4]; // [rsp+220h] [rbp-38h] BYREF
  char v25; // [rsp+230h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+23Ch] [rbp-1Ch]
  _BYTE *v27; // [rsp+240h] [rbp-18h]
  _DWORD *v28; // [rsp+248h] [rbp-10h]
  char *v29; // [rsp+250h] [rbp-8h]

  if ( (unsigned __int64)v22 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    JUMPOUT(0x1827898DBLL);
  }
  v22[1] = a3;
  v29 = &v25;
  v5 = sub_278ACE0();
  if ( (unsigned int)sub_278AD40(a1: v7, a2: v8, a3: v5, a4: v6, a5: 8, a6: v29) != 0 )
  {
    v28 = v24;
    v24[0] = 261;
    v13 = *(_QWORD *)v29;
    v27 = v23;
    v26 = sub_278AF40(a1: v11, a2: v12, a3: v13, a4: v24, a5: v23, a6: v24);
    sub_278AEA0(a1: v14, a2: v15, a3: *(_QWORD *)v29);
    if ( v26 != 0 )
    {
      result = sub_2789660(a1: v16, a2: v17, a3: (__int64)v27, a4: (__int64)v28, a5: *v28 - 1);
      if ( *(int *)(v4 + 16) <= 0 )
        return sub_277F280(a1: v20, a2: v21, a3: v19, a4: v26);
    }
    else
    {
      if ( *(int *)(v4 + 16) <= 0 )
        sub_277F280(a1: v16, a2: v17, a3: (__int64)v29, a4: (__int64)v28);
      return v3 + 371641896;
    }
  }
  else
  {
    if ( *(int *)(v4 + 16) <= 0 )
      sub_277F280(a1: v11, a2: v12, a3: v9, a4: v10);
    return v3 + 371641896;
  }
  return result;
}
