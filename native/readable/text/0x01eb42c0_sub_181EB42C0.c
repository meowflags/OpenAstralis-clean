// sub_1EB42C0
// rva 0x01eb42c0  size 998  section .text  group text
// window base 0x181eb42c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB42C0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 result; // rax
  __int64 v31; // rdi
  __int64 v32; // rdi
  int v33; // edx
  int v34; // ecx
  int v35; // edi
  int v36; // esi
  int v37; // r8d
  int v38; // r9d
  char v39; // [rsp+0h] [rbp-58h] BYREF
  __int64 v40; // [rsp+8h] [rbp-50h]
  __int64 v41; // [rsp+10h] [rbp-48h]
  __int64 v42; // [rsp+18h] [rbp-40h]
  __int64 v43; // [rsp+20h] [rbp-38h]
  unsigned int v44; // [rsp+2Ch] [rbp-2Ch]
  __int64 v45; // [rsp+30h] [rbp-28h]
  unsigned int v46; // [rsp+3Ch] [rbp-1Ch]
  __int64 v47; // [rsp+40h] [rbp-18h]
  int v48; // [rsp+4Ch] [rbp-Ch]
  int v49; // [rsp+50h] [rbp-8h]
  unsigned int v50; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v39);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EB46C0(a1: v35, a2: v36, a3: v33, a4: v34, a5: v37, a6: v38, a7);
  }
  else
  {
    v45 = a3;
    v44 = *(_DWORD *)(a3 + 4);
    v9 = *(unsigned __int8 *)(a3 + 20);
    v50 = *(unsigned __int8 *)(a3 + 20);
    v10 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v10 != 0 )
    {
      v43 = v7 + 8LL * v44;
      v11 = *(unsigned int *)(v7 + 8 * v10 + 8);
      v42 = v7 + 8 * v10;
      v49 = sub_631FE80(a1: 1, a2, a3: v42, a4: v9, a5: 0, a6: v11);
      a3 = v45;
    }
    else
    {
      v49 = 0;
      v43 = v7 + 8LL * v44;
    }
    v12 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v12 != 0 )
    {
      v13 = *(unsigned int *)(v7 + 8 * v12 + 8);
      v42 = v7 + 8 * v12;
      v48 = sub_631FE80(a1: 1, a2, a3: v42, a4: v9, a5: 0, a6: v13);
      a3 = v45;
    }
    else
    {
      v48 = 0;
    }
    v14 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v14 != 0 )
    {
      v15 = *(unsigned int *)(v7 + 8 * v14 + 8);
      v42 = v7 + 8 * v14;
      v16 = (unsigned int)sub_631FE80(a1: 1, a2, a3: v42, a4: v9, a5: 0, a6: v15);
    }
    else
    {
      v16 = 0;
    }
    v17 = v49;
    v18 = (unsigned int)(v49 + 128);
    v19 = 34086464;
    if ( (unsigned int)v18 >= 0x100 )
    {
      v20 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v20 + 16) > *(_QWORD *)(v8 + 32) )
      {
        v47 = 34086464;
        v46 = v16;
        v20 = sub_1EAA920(a1, a2, a3: 34086464);
        v19 = v47;
        v16 = v46;
        v17 = v49;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v20 + 16;
        *(_DWORD *)v20 = 34086464;
        *(_DWORD *)(v20 + 4) = 0;
        *(_QWORD *)(v20 + 8) = 0;
      }
      *(_DWORD *)(v20 + 4) = v17;
    }
    else
    {
      v20 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v18 + 376353204);
    }
    v21 = v48;
    v22 = (unsigned int)(v48 + 128);
    if ( (unsigned int)v22 >= 0x100 )
    {
      v23 = *(_QWORD *)(v8 + 40);
      v32 = v23 + 16;
      if ( (unsigned __int64)(v23 + 16) > *(_QWORD *)(v8 + 32) )
      {
        v42 = v20;
        v46 = v16;
        v47 = v19;
        v23 = sub_1EAA920(a1: v32, a2, a3: v19);
        v20 = v42;
        v19 = v47;
        v16 = v46;
        v21 = v48;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v32;
        *(_DWORD *)v23 = 34086464;
        *(_DWORD *)(v23 + 4) = 0;
        *(_QWORD *)(v23 + 8) = 0;
      }
      *(_DWORD *)(v23 + 4) = v21;
    }
    else
    {
      v23 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v22 + 376353204);
    }
    v24 = (unsigned int)(v16 + 128);
    if ( (unsigned int)v24 >= 0x100 )
    {
      v31 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v31 + 16) > *(_QWORD *)(v8 + 32) )
      {
        v41 = v23;
        v42 = v20;
        v47 = v19;
        v46 = v16;
        v31 = sub_1EAA920(a1: v31, a2, a3: v19);
        v23 = v41;
        v20 = v42;
        v16 = v46;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v31 + 16;
        *(_DWORD *)v31 = 34086464;
        *(_DWORD *)(v31 + 4) = 0;
        *(_QWORD *)(v31 + 8) = 0;
      }
      *(_DWORD *)(v31 + 4) = v16;
      v25 = v31;
    }
    else
    {
      v25 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v24 + 376353204);
    }
    v26 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v26 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v40 = v25;
      v41 = v23;
      v42 = v20;
      v46 = v16;
      v26 = sub_1EAA840(a1: v26, a2: 34084944, a3: 34084944, a4: v16, a5: 7u);
      v25 = v40;
      v23 = v41;
      v20 = v42;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v26 + 40;
      *(_QWORD *)v26 = 34084944;
      *(_DWORD *)(v26 + 8) = 7;
      *(_DWORD *)(v26 + 12) = 0;
      *(_QWORD *)(v26 + 16) = 0;
      *(_QWORD *)(v26 + 24) = 0;
      *(_QWORD *)(v26 + 32) = 0;
    }
    v27 = v50;
    v28 = v44;
    v29 = v45;
    if ( *(_BYTE *)(v45 + 22) != 0 )
      JUMPOUT(0x303D3E467LL);
    *(_DWORD *)(v26 + 36) = 4390910;
    if ( *(_BYTE *)(v29 + 21) != 0 )
      JUMPOUT(0x303D3E47FLL);
    *(_DWORD *)(v26 + 32) = 4390910;
    *(_DWORD *)(v26 + 28) = (unsigned __int64)(v25 - v7) >> 3;
    *(_DWORD *)(v26 + 24) = (unsigned __int64)(v23 - v7) >> 3;
    *(_DWORD *)(v26 + 20) = (unsigned __int64)(v20 - v7) >> 3;
    if ( (_DWORD)v27 != 0 )
      JUMPOUT(0x303D3E4AFLL);
    *(_DWORD *)(v26 + 16) = 4390910;
    *(_DWORD *)(v26 + 12) = v28;
    v42 = v26;
    result = sub_631FE80(a1: 1, a2: v7 + 35127280, a3: v26, a4: v27, a5: 0, a6: 7);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v42);
  }
  return result;
}
