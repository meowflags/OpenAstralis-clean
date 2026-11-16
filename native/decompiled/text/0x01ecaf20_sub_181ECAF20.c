// sub_181ECAF20
// rva 0x01ecaf20  size 781  section .text  group text
// window base 0x181ecaf20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ECAF20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  char v40; // [rsp+0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+10h] [rbp-48h]
  __int64 v42; // [rsp+18h] [rbp-40h]
  __int64 v43; // [rsp+20h] [rbp-38h]
  __int64 v44; // [rsp+28h] [rbp-30h]
  __int64 v45; // [rsp+30h] [rbp-28h]
  unsigned int v46; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v47; // [rsp+40h] [rbp-18h]
  unsigned int v48; // [rsp+44h] [rbp-14h]
  unsigned int v49; // [rsp+48h] [rbp-10h]
  int v50; // [rsp+4Ch] [rbp-Ch]
  __int64 v51; // [rsp+50h] [rbp-8h]

  v45 = a3;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v9 + 8) )
  {
    v23 = sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v40);
    goto LABEL_24;
  }
  result = MEMORY[0x1827C2280](a1, a2, a3, a4, a5: v8 + 376659720);
  if ( result == v8 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  else
  {
    v13 = *(_QWORD *)(v8 + 8LL * (*(_DWORD *)result >> 3) + 112);
    v44 = result;
    v14 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7 + v13))(a1: v11, a2: v12, a3: result);
    v17 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v17 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v43 = v14;
      v17 = sub_181EAA920(a1: v15, a2: v16, a3: 40470016);
      v14 = v43;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v17 + 24;
      *(_DWORD *)v17 = 40470016;
      *(_DWORD *)(v17 + 4) = 0;
      *(_QWORD *)(v17 + 8) = 0;
      *(_QWORD *)(v17 + 16) = 0;
    }
    v43 = v17;
    MEMORY[0x1827B6000](a1: v15, a2: v16, a3: v17, a4: v17, a5: v14, a6: v8);
    result = MEMORY[0x1827B6940](a1: v18, a2: v19, a3: v43);
    v50 = result;
    if ( (int)result >= 1 )
    {
      v23 = MEMORY[0x18278EF20](a1: v21, a2: v22, a3: v43);
      v26 = *(unsigned int *)(v45 + 32);
      if ( (_DWORD)v26 != 0 )
      {
        v42 = v8 + 365146176;
        v49 = v23;
        v27 = MEMORY[0x1827BC2C0](a1: v24, a2: v25, a3: v8 + 8 * v26, a4: v8 + 365146176, a5: v23, a6: v8 + 365146176);
        if ( v27 == v8 || v8 + 376659744 != v27 )
        {
          v28 = 1;
          while ( 1 )
          {
            result = (unsigned int)v50;
            v20 = v43;
            if ( v50 <= (int)v28 )
              goto LABEL_17;
            v47 = v28;
            v29 = MEMORY[0x18278EF20](a1: v21, a2: v43);
            v33 = *(unsigned int *)(v45 + 32);
            if ( (_DWORD)v33 == 0 )
              break;
            v46 = v29;
            v34 = MEMORY[0x1827BC2C0](a1: v31, a2: v32, a3: v8 + 8 * v33, a4: v30, a5: v29, a6: v42);
            v28 = v47 + 1;
            if ( v34 != v8 && v8 + 376659744 == v34 )
              goto LABEL_34;
          }
          v46 = v29;
          v34 = MEMORY[0x182771080]();
LABEL_34:
          v41 = v34;
          v51 = v7;
          v48 = v46;
          v49 = v47;
LABEL_26:
          v35 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v35 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v35 = sub_181EAA920(a1: v21, a2: v22, a3: 36449800);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v35 + 40;
            *(_DWORD *)v35 = 36449800;
            *(_DWORD *)(v35 + 4) = 0;
            *(_QWORD *)(v35 + 8) = 0;
            *(_QWORD *)(v35 + 16) = 0;
            *(_QWORD *)(v35 + 24) = 0;
            *(_QWORD *)(v35 + 32) = 0;
          }
          *(_DWORD *)(v35 + 20) = 46923644;
          *(_DWORD *)(v35 + 16) = *(_DWORD *)(v8 + 374343896);
          *(_DWORD *)(v35 + 12) = (unsigned __int64)(v35 - v8) >> 3;
          v42 = v35;
          MEMORY[0x18503B9A0](a1: v21, a2: v22, a3: v35, a4: v28, a5: 0);
          v39 = v42;
          *(_DWORD *)(v42 + 8) = 46440631;
          if ( (*(_DWORD *)v39 & 2) != 0 )
            goto LABEL_30;
          while ( 1 )
          {
            v39 = MEMORY[0x182769900](a1: v37, a2: v38, a3: v39, a4: v36, a5: &a7);
LABEL_30:
            v36 = (v39 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v39 & 0xFFFFFFFFFFF80000LL) + ((v39 - v36) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v39 & 0xFFFFFFFFFFF80000LL) + ((v39 - v36) >> 9) + 0x38) = 0;
          }
        }
LABEL_25:
        v41 = v27;
        v51 = v7;
        v48 = v49;
        v49 = 0;
        goto LABEL_26;
      }
LABEL_24:
      v49 = v23;
      v27 = MEMORY[0x182771080]();
      goto LABEL_25;
    }
    v28 = 0;
LABEL_17:
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v21, a2: v22, a3: v20, a4: v28);
  }
  return result;
}
