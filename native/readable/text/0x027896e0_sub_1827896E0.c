// sub_27896E0
// rva 0x027896e0  size 168  section .text  group text
// window base 0x1827896e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27896E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  signed int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD v15[2]; // [rsp+0h] [rbp-228h] BYREF
  _BYTE v16[520]; // [rsp+10h] [rbp-218h] BYREF
  int v17; // [rsp+218h] [rbp-10h]
  signed int v18; // [rsp+21Ch] [rbp-Ch]
  _BYTE *v19; // [rsp+220h] [rbp-8h]

  v15[1] = a3;
  if ( (unsigned __int64)v15 <= *(_QWORD *)(v5 + 8) )
  {
    v6 = sub_1EB84E0();
    goto LABEL_7;
  }
  v19 = v16;
  v6 = sub_278AEC0(a1, a2, a3: 260, a4, a5: v16);
  v18 = v6;
  if ( v6 < 1 || (unsigned int)v6 >= 0x104 )
  {
LABEL_7:
    if ( v6 < 1 )
    {
      v17 = 0;
      sub_28C1C40(a1: v8, a2: 0, a3: v4 + 371340584);
      JUMPOUT(0x182789788LL);
    }
    JUMPOUT(0x304ED2778LL);
  }
  result = sub_2789660(a1: v8, a2: v9, a3: (__int64)v19, a4: v7, a5: v6);
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280(a1: v13, a2: v14, a3: v11, a4: v12);
  return result;
}
