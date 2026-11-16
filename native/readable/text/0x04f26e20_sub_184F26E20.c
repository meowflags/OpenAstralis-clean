// sub_4F26E20
// rva 0x04f26e20  size 576  section .text  group text
// window base 0x184f26e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F26E20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  int v12; // edi
  int v13; // esi
  int v14; // r8d
  int v15; // r9d
  unsigned __int64 v16; // rcx
  __int64 result; // rax
  unsigned __int64 v18; // rbp
  char v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h]
  __int64 v21; // [rsp+18h] [rbp-20h]
  __int64 v22; // [rsp+20h] [rbp-18h]
  __int64 v23; // [rsp+28h] [rbp-10h]
  _DWORD *v24; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    return sub_4F27060();
  }
  else
  {
    v24 = a3;
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v23 = a6;
      v22 = a5;
      v8 = sub_1EAA920(a1, a2, a3: 34860680);
      a6 = v23;
      a5 = v22;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 24;
      *(_DWORD *)v8 = 34860680;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
    }
    v21 = v8;
    v9 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v9 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v23 = a6;
      v22 = a5;
      v9 = sub_1EAA920(a1, a2, a3: 34228624);
      v8 = v21;
      a6 = v23;
      a5 = v22;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v9 + 24;
      *(_DWORD *)v9 = 34228624;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
    }
    v10 = *(_QWORD *)(v7 + 40);
    v11 = 43283312;
    if ( (unsigned __int64)(v10 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v20 = v9;
      v23 = a6;
      v22 = a5;
      v10 = sub_1EAA840(a1, a2: 43283312, a3: 43283312, a4: v9, a5: 2);
      v9 = v20;
      v8 = v21;
      a6 = v23;
      a5 = v22;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v10 + 24;
      *(_QWORD *)v10 = 43283312;
      *(_DWORD *)(v10 + 8) = 2;
      *(_DWORD *)(v10 + 12) = 0;
      *(_QWORD *)(v10 + 16) = 0;
    }
    *(_DWORD *)(v10 + 16) = (unsigned __int64)(a6 - v6) >> 3;
    *(_DWORD *)(v10 + 12) = (unsigned __int64)(a5 - v6) >> 3;
    *(_DWORD *)(v9 + 8) = (unsigned __int64)(v10 - v6) >> 3;
    if ( (*(_DWORD *)v9 & 2) != 0 )
    {
      v11 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v11) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v11) >> 9) + 0x38) = 0;
    }
    v23 = a6;
    v22 = a5;
    v20 = v9;
    sub_57C5580(a1, a2: v11, a3: v8, a4: v9, a5: v9);
    v16 = (unsigned __int64)v24;
    v24[1] = (unsigned __int64)(v21 - v6) >> 3;
    if ( (*(_DWORD *)v16 & 2) != 0 )
    {
      v18 = (v16 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v18) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v16 & 0xFFFFFFFFFFF80000LL) + ((v16 - v18) >> 9) + 0x38) = 0;
    }
    result = sub_4F272E0(a1: v12, a2: v13, a3: v16, a4: v16, a5: v14, a6: v15, a7: v19);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
