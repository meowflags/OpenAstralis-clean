// sub_5040160
// rva 0x05040160  size 576  section .text  group text
// window base 0x185040160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5040160(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 (*v7)(void); // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v27; // rbx
  __int64 v28; // [rsp+0h] [rbp-38h] BYREF
  __int64 v29; // [rsp+10h] [rbp-28h]
  __int64 v30; // [rsp+18h] [rbp-20h]
  __int64 v31; // [rsp+20h] [rbp-18h]
  _DWORD *v32; // [rsp+28h] [rbp-10h]
  __int64 v33; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    return sub_50403A0();
  }
  else
  {
    v6 = *a3 >> 3;
    v7 = (__int64 (*)(void))(v3 + *(_QWORD *)(v4 + 8 * v6 + 128));
    v33 = v4 + 8LL * *(unsigned int *)(v4 + 8 * v6 + 12);
    v32 = a3;
    v8 = v7();
    if ( v8 == v4 )
    {
      v25 = v33;
      v31 = v8;
    }
    else
    {
      v12 = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v5 + 32) )
      {
        v31 = v8;
        v12 = sub_1EAA920(a1: v10, a2: v11, a3: 34085680);
        v8 = v31;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v12 + 24;
        *(_DWORD *)v12 = 34085680;
        *(_DWORD *)(v12 + 4) = 0;
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)(v12 + 16) = 0;
      }
      v30 = v12;
      v13 = *(_QWORD *)(v5 + 40);
      v14 = v13 + 32;
      if ( (unsigned __int64)(v13 + 32) > *(_QWORD *)(v5 + 32) )
      {
        v31 = v8;
        v13 = sub_1EAA840(a1: v10, a2: v11, a3: 34082368, a4: v14, a5: 16);
        v12 = v30;
        v8 = v31;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v14;
        *(_QWORD *)v13 = 34082368;
        *(_DWORD *)(v13 + 8) = 16;
        *(_DWORD *)(v13 + 12) = 0;
        *(_QWORD *)(v13 + 16) = 0;
        *(_QWORD *)(v13 + 24) = 0;
      }
      *(_DWORD *)(v12 + 4) = (unsigned __int64)(v13 - v4) >> 3;
      if ( (*(_DWORD *)v12 & 2) != 0 )
      {
        v27 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v27) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v27) >> 9) + 0x38) = 0;
      }
      v31 = v8;
      sub_4F36F80(a1: v10, a2: v11, a3: v12, a4: v12, a5: v33);
      sub_4F36F80(a1: v16, a2: v17, a3: v30, a4: v15, a5: v4 + 372436952);
      v21 = sub_4F36F80(a1: v19, a2: v20, a3: v30, a4: v18, a5: v31);
      v9 = v30;
      if ( *(_DWORD *)(v30 + 8) != 0 )
      {
        v23 = *(_QWORD *)(v5 + 40);
        if ( (unsigned __int64)(v23 + 24) > *(_QWORD *)(v5 + 32) )
        {
          v29 = v21;
          v23 = sub_1EAA920(a1: v10, a2: v11, a3: 34082680);
          v24 = v30;
        }
        else
        {
          *(_QWORD *)(v5 + 40) = v23 + 24;
          *(_DWORD *)v23 = 34082680;
          *(_DWORD *)(v23 + 4) = 0;
          *(_QWORD *)(v23 + 8) = 0;
          *(_QWORD *)(v23 + 16) = 0;
          v24 = v9;
        }
        v29 = v23;
        sub_4FE9280(a1: v10, a2: v11, a3: v23, a4: v22, a5: v24, a6: v4);
        v25 = v29;
      }
      else
      {
        v25 = v4 + 373281248;
      }
    }
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280(a1: v10, a2: v11, a3: v9, a4: v33, a5: v25);
    return v25;
  }
}
