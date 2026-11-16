// sub_185033F60
// rva 0x05033f60  size 724  section .text  group text
// window base 0x185033f60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_185033F60(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, _DWORD *); // rbp
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rsi
  _DWORD *v17; // rdx
  unsigned __int64 i; // r8
  unsigned __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rdx
  _DWORD *v23; // rbx
  unsigned __int8 v24; // al
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  int v32; // ebp
  unsigned __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  int v38; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v39; // [rsp+10h] [rbp-38h]
  __int64 v40; // [rsp+18h] [rbp-30h]
  unsigned int v41; // [rsp+24h] [rbp-24h]
  __int64 v42; // [rsp+28h] [rbp-20h]
  __int64 v43; // [rsp+30h] [rbp-18h]
  _DWORD *v44; // [rsp+38h] [rbp-10h]
  unsigned int v45; // [rsp+44h] [rbp-4h]

  v44 = a3;
  v43 = a5;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v8 )
  {
    v41 = *a3 >> 3;
    v10 = ((__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * v41 + 144)))();
    v11 = (__int64 (__fastcall *)(__int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * v41 + 112));
    v12 = v8 + 8LL * (unsigned int)v44[7];
    v42 = v10;
    v40 = v12;
    v14 = v11(a1: v13, a2: v44);
    v17 = *(_DWORD **)(v9 + 40);
    if ( (unsigned __int64)(v17 + 28) > *(_QWORD *)(v9 + 32) )
    {
      v45 = v14;
      v19 = MEMORY[0x181EAA920](a1: v15, a2: v16, a3: 34099232);
      v14 = v45;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v17 + 28;
      *v17 = 34099232;
      v17[1] = 0;
      for ( i = 2; i < 28; i += 2LL )
        *(_QWORD *)&v17[i] = 0;
      v19 = (unsigned __int64)v17;
    }
    v39 = (_DWORD *)v19;
    sub_18502E460(a1: v14, a2: v43, a3: v19, a4: *((_QWORD *)v44 + 4), a5: v40, a6: v42);
    v22 = v44;
    if ( *((_BYTE *)v44 + 25) != 0 )
    {
      v23 = v39;
      v24 = *((_BYTE *)v44 + 26);
      v25 = (unsigned int)v39[3];
      if ( (_DWORD)v25 == 0 )
        goto LABEL_31;
      *(_BYTE *)(v8 + 8 * v25 + 32) = v24;
      __faststorefence();
    }
    else
    {
      v23 = v39;
    }
    v26 = v22[10];
    if ( v26 != 0 )
    {
      v27 = (unsigned int)v23[3];
      if ( (_DWORD)v27 == 0 )
        goto LABEL_32;
      v28 = *(unsigned int *)(v8 + 8 * v27 + 4);
      if ( (_DWORD)v28 != 0 )
      {
        v32 = *(_DWORD *)(v8 + 8 * v28 + 20);
        v21 = (unsigned int)v23[3];
        if ( v26 < v32 )
          JUMPOUT(0x30A04F113LL);
        if ( (_DWORD)v21 == 0 )
        {
          while ( 1 )
          {
            MEMORY[0x182771080](a1: v20, a2: v21, a3: v42, a4: v8 + 8 * v28);
LABEL_34:
            v34 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
LABEL_30:
            *(_DWORD *)(v34 + 20) = 46923644;
            *(_DWORD *)(v34 + 16) = *(_DWORD *)(v8 + 374343896);
            *(_DWORD *)(v34 + 12) = (unsigned __int64)(v34 - v8) >> 3;
            v42 = v34;
            sub_18503B9A0(a1, a2, a3: v34, a4, a5: 0);
            v24 = MEMORY[0x182769900](a1: v36, a2: v37, a3: v42, a4: v35, a5: &a7);
LABEL_31:
            MEMORY[0x182771080](a1: v20, a2: v21, a3: v24);
LABEL_32:
            MEMORY[0x182771080]();
          }
        }
        *(_DWORD *)(v8 + 8 * v21 + 24) = v32;
        __faststorefence();
      }
    }
    v29 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * v41 + 128)))(
            a1: v20,
            a2: v21,
            a3: v22,
            a4: v22);
    if ( v29 == v8 )
    {
      v30 = (unsigned __int64)v39;
    }
    else
    {
      v30 = (unsigned __int64)v39;
      v39[11] = (unsigned __int64)(v29 - v8) >> 3;
      __faststorefence();
      if ( (*(_DWORD *)v30 & 2) != 0 )
      {
        v33 = (v30 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v33) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v30 & 0xFFFFFFFFFFF80000LL) + ((v30 - v33) >> 9) + 0x38) = 0;
      }
    }
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v30;
  }
  v34 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v34 + 48) > *(_QWORD *)(v9 + 32) )
    goto LABEL_34;
  *(_QWORD *)(v9 + 40) = v34 + 48;
  *(_DWORD *)v34 = 34101256;
  *(_DWORD *)(v34 + 4) = 0;
  *(_QWORD *)(v34 + 8) = 0;
  *(_QWORD *)(v34 + 16) = 0;
  *(_QWORD *)(v34 + 24) = 0;
  *(_QWORD *)(v34 + 32) = 0;
  *(_QWORD *)(v34 + 40) = 0;
  goto LABEL_30;
}
