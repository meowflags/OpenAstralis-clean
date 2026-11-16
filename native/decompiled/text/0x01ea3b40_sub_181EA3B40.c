// sub_181EA3B40
// rva 0x01ea3b40  size 453  section .text  group text
// window base 0x181ea3b40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA3B40(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  _QWORD *v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  signed __int64 v19[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v20; // [rsp+20h] [rbp-38h]
  signed __int64 v21; // [rsp+28h] [rbp-30h]
  signed __int64 *v22; // [rsp+30h] [rbp-28h]
  unsigned __int64 v23; // [rsp+38h] [rbp-20h]
  unsigned __int64 v24; // [rsp+40h] [rbp-18h]
  unsigned __int64 v26; // [rsp+50h] [rbp-8h]

  v5 = *(_QWORD *)(v4 + 40);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = v6 - v5;
  if ( v5 != 0 )
  {
    if ( v6 != 0 )
      v8 = *(_QWORD *)(v4 + 32) - v5;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)(v4 + 192);
  if ( v8 > v9 )
  {
    *(_QWORD *)(v4 + 192) = v9 + 4;
    ++*(_DWORD *)(v4 + 352);
    return 0;
  }
  else
  {
    v26 = a3;
    if ( v5 != 0 )
    {
      if ( v6 == 0 )
        v7 = 0;
    }
    else
    {
      v7 = 0;
    }
    *(_DWORD *)(v4 + 348) += v7;
    sub_181EA4340(a1, a2, a3: v4, a4: v7, a5: 0);
    v11 = *(_QWORD *)(v3 + 376656344);
    v12 = *(_QWORD **)(v3 + 376656592);
    if ( v12 != nullptr )
    {
      v13 = *v12 - v12[4];
      if ( v11 > v13 )
      {
        v14 = 522176;
      }
      else
      {
        if ( v13 > 0x7F7C0 )
          JUMPOUT(0x303D2DBEFLL);
        v14 = *v12 - v12[4];
      }
    }
    else
    {
      v14 = 522176;
    }
    if ( *(_QWORD *)(v4 + 184) + v26 < v14 )
      JUMPOUT(0x303D2DC05LL);
    v24 = v14;
    if ( v26 > v11 )
      JUMPOUT(0x303D2DC14LL);
    v23 = v11;
    if ( v11 > v14 )
    {
      return 0;
    }
    else
    {
      v22 = v19;
      v19[0] = 0;
      v15 = sub_181E983E0(a1: v19, a2: v10, a3: v3 + 376656584, a4: v11, a5: v11, a6: v14);
      if ( v15 != 0 )
      {
        v21 = *v22;
        v20 = v15;
        sub_181EA42C0(a1: v16, a2: v17, a3: v15, a4: v22, a5: v26 + v15, a6: v21);
        return v20;
      }
      else
      {
        return 0;
      }
    }
  }
}
