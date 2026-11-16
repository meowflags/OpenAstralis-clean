// sub_27898E0
// rva 0x027898e0  size 310  section .text  group text
// window base 0x1827898e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27898E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  _QWORD v27[2]; // [rsp+0h] [rbp-248h] BYREF
  _DWORD v28[4]; // [rsp+10h] [rbp-238h] BYREF
  _BYTE v29[528]; // [rsp+20h] [rbp-228h] BYREF
  _BYTE *v30; // [rsp+230h] [rbp-18h]
  _DWORD *v31; // [rsp+238h] [rbp-10h]
  __int64 v32; // [rsp+240h] [rbp-8h]

  if ( (unsigned __int64)v27 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    JUMPOUT(0x182789A16LL);
  }
  v27[1] = a3;
  v6 = sub_15A85E0(a1, a2, a3: v4 + 376669752, a4, a5: 0);
  v9 = sub_278B080(a1: v7, a2: v8, a3: v6);
  if ( v9 != 0 && (v32 = v9, (v20 = sub_278B180(a1: v10, a2: v11, a3: v9)) != 0) )
  {
    v30 = (_BYTE *)v20;
    v21 = sub_4F9CAA0(a1: v10, a2: v11, a3: v20);
    result = sub_2789660(a1: v23, a2: v24, a3: v32, a4: v22, a5: v21);
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280(a1: v25, a2: v26, a3: v32, a4: (__int64)v30);
  }
  else
  {
    v31 = v28;
    v28[0] = 257;
    v30 = v29;
    if ( (unsigned int)sub_278AF20(a1: v10, a2: v11, a3: v29, a4: v28, a5: v28) != 0 )
    {
      result = sub_2789660(a1: v13, a2: v14, a3: (__int64)v30, a4: (__int64)v31, a5: *v31 - 1);
      if ( *(int *)(v5 + 16) <= 0 )
        return sub_277F280(a1: v18, a2: v19, a3: v16, a4: v17);
    }
    else
    {
      if ( *(int *)(v5 + 16) <= 0 )
        sub_277F280(a1: v13, a2: v14, a3: v12, a4: (__int64)v31);
      return v4 + 350867296;
    }
  }
  return result;
}
