// sub_184F47440
// rva 0x04f47440  size 1326  section .text  group text
// window base 0x184f47440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F47440(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12)
{
  __int64 v12; // r13
  _DWORD *v13; // r14
  __int64 v14; // r15
  _DWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, _DWORD *, _QWORD, _QWORD); // rcx
  __int64 result; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rdi
  __int64 v30; // rsi
  int v31; // r8d
  int v32; // r9d
  _DWORD *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // r8
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rsi
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rbx
  char v74; // [rsp+0h] [rbp-38h] BYREF
  __int64 v75; // [rsp+10h] [rbp-28h]
  __int64 v76; // [rsp+18h] [rbp-20h]
  _DWORD *v77; // [rsp+20h] [rbp-18h]
  _DWORD *v78; // [rsp+28h] [rbp-10h]
  unsigned int v79; // [rsp+34h] [rbp-4h]

  v79 = a3;
  if ( (unsigned __int64)&v74 <= *(_QWORD *)(v14 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_21:
    v63 = a3 + 128;
    if ( (unsigned int)v63 < 0x100 )
    {
      v64 = (__int64)&v13[2 * v13[v63 + 94088301]];
      goto LABEL_23;
    }
    goto LABEL_31;
  }
  if ( HIWORD(a3) >= 0x11u )
    goto LABEL_21;
  v15 = (_DWORD *)MEMORY[0x184F5BEE0]();
  if ( v15 == v13 )
    goto LABEL_29;
  v18 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD))(v12 + *(_QWORD *)&v13[2 * (*v15 >> 3) + 30]);
  result = v18(a1: v16, a2: v17, a3: v15, a4: v18, a5: v79);
  if ( (_DWORD *)result == v13 )
  {
    if ( (unsigned int)sub_184F47B80(a1: v20, a2: v21, a3: v79) != 0 )
    {
      v27 = sub_184F44EA0(a1: v23, a2: v24, a3: v79, a4: v22, a5: v25, a6: v26, a7: v74);
      v33 = v13 + 94064452;
      if ( (_DWORD *)v27 == v13 )
      {
        return sub_184F47670(a1: v29, a2: v30, a3: v28, a4: (_DWORD)v33, a5: v31, a6: v32, a7, a8, a9, a10, a11, a12);
      }
      else
      {
        v34 = *(unsigned int *)(v27 + 4);
        if ( (_DWORD)v34 == 0 )
        {
          while ( 1 )
          {
            MEMORY[0x182771080](a1: v29, a2: v30, a3: v79, a4: v33);
LABEL_31:
            v64 = *(_QWORD *)(v14 + 40);
            if ( (unsigned __int64)(v64 + 16) > *(_QWORD *)(v14 + 32) )
            {
              v64 = MEMORY[0x181EAA920](a1, a2, a3: 34086464);
              a3 = v79;
            }
            else
            {
              *(_QWORD *)(v14 + 40) = v64 + 16;
              *(_DWORD *)v64 = 34086464;
              *(_DWORD *)(v64 + 4) = 0;
              *(_QWORD *)(v64 + 8) = 0;
            }
            *(_DWORD *)(v64 + 4) = a3;
LABEL_23:
            v65 = *(_QWORD *)(v14 + 40);
            v66 = v65 + 24;
            if ( (unsigned __int64)(v65 + 24) > *(_QWORD *)(v14 + 32) )
            {
              v77 = (_DWORD *)v64;
              v65 = MEMORY[0x181EAA840](a1: v66, a2, a3: 34084944, a4, a5: 2);
              v64 = (__int64)v77;
            }
            else
            {
              *(_QWORD *)(v14 + 40) = v66;
              *(_QWORD *)v65 = 34084944;
              *(_DWORD *)(v65 + 8) = 2;
              *(_DWORD *)(v65 + 12) = 0;
              *(_QWORD *)(v65 + 16) = 0;
            }
            v77 = (_DWORD *)v65;
            *(_DWORD *)(v65 + 16) = (unsigned __int64)(v64 - (_QWORD)v13) >> 3;
            *(_DWORD *)(v65 + 12) = 7533399;
            v76 = MEMORY[0x1827768E0](a1: v65, a2, a3: 1, a4: v65, a5: v13, a6: v13 + 14155058);
            v69 = *(_QWORD *)(v14 + 40);
            if ( (unsigned __int64)(v69 + 40) > *(_QWORD *)(v14 + 32) )
            {
              v69 = MEMORY[0x181EAA920](a1: v67, a2: v68, a3: 34081944);
            }
            else
            {
              *(_QWORD *)(v14 + 40) = v69 + 40;
              *(_DWORD *)v69 = 34081944;
              *(_DWORD *)(v69 + 4) = 0;
              *(_QWORD *)(v69 + 8) = 0;
              *(_QWORD *)(v69 + 16) = 0;
              *(_QWORD *)(v69 + 24) = 0;
              *(_QWORD *)(v69 + 32) = 0;
            }
            *(_DWORD *)(v69 + 20) = 46923644;
            *(_DWORD *)(v69 + 16) = v13[93585974];
            *(_DWORD *)(v69 + 12) = (unsigned __int64)(v69 - (_QWORD)v13) >> 3;
            v77 = (_DWORD *)v69;
            MEMORY[0x18503B9A0](a1: v67, a2: v68, a3: v69, a4: v69, a5: 0);
            v72 = (unsigned __int64)v77;
            v77[2] = (unsigned __int64)(v76 - (_QWORD)v13) >> 3;
            if ( (*(_DWORD *)v72 & 2) != 0 )
            {
              v73 = (v72 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v73) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v72 & 0xFFFFFFFFFFF80000LL) + ((v72 - v73) >> 9) + 0x38) = 0;
            }
            MEMORY[0x182769900](a1: v70, a2: v71, a3: v72, a4: v72, a5: &a7);
LABEL_29:
            MEMORY[0x182771080](a1: v16, a2: v17, a3: v79);
          }
        }
        v78 = v13 + 94064452;
        v77 = (_DWORD *)v27;
        v35 = MEMORY[0x184FFACC0](a1: v29, a2: v30, a3: &v13[2 * v34], a4: v33, a5: 95, a6: 32);
        v38 = *(_QWORD *)(v14 + 40);
        if ( (unsigned __int64)(v38 + 24) > *(_QWORD *)(v14 + 32) )
          JUMPOUT(0x184F476E5LL);
        *(_QWORD *)(v14 + 40) = v38 + 24;
        *(_DWORD *)v38 = 34085680;
        *(_DWORD *)(v38 + 4) = 0;
        *(_QWORD *)(v38 + 8) = 0;
        *(_QWORD *)(v38 + 16) = 0;
        v75 = v38;
        v39 = *(_QWORD *)(v14 + 40);
        if ( (unsigned __int64)(v39 + 32) > *(_QWORD *)(v14 + 32) )
          JUMPOUT(0x184F47705LL);
        *(_QWORD *)(v14 + 40) = v39 + 32;
        *(_QWORD *)v39 = 34082368;
        *(_DWORD *)(v39 + 8) = 16;
        *(_DWORD *)(v39 + 12) = 0;
        *(_QWORD *)(v39 + 16) = 0;
        *(_QWORD *)(v39 + 24) = 0;
        *(_DWORD *)(v38 + 4) = (unsigned __int64)(v39 - (_QWORD)v13) >> 3;
        if ( (*(_DWORD *)v38 & 2) != 0 )
          JUMPOUT(0x184F476AELL);
        v76 = v35;
        sub_184F36F80(a1: v36, a2: v37, a3: v38, a4: v38, a5: v35);
        sub_184F36F80(a1: v41, a2: v42, a3: v75, a4: v40, a5: (__int64)(v13 + 93263822));
        v46 = MEMORY[0x184F8CF80](a1: v44, a2: v45, a3: v79, a4: v43, a5: 4);
        v78 = (_DWORD *)MEMORY[0x184FFE180](a1: v48, a2: v49, a3: v46, a4: v47, a5: v78);
        sub_184F36F80(a1: v51, a2: v52, a3: v75, a4: v50, a5: (__int64)v78);
        v56 = v75;
        if ( *(_DWORD *)(v75 + 8) == 0 )
          JUMPOUT(0x184F476A2LL);
        v57 = *(_QWORD *)(v14 + 40);
        if ( (unsigned __int64)(v57 + 24) > *(_QWORD *)(v14 + 32) )
          JUMPOUT(0x184F4772ALL);
        *(_QWORD *)(v14 + 40) = v57 + 24;
        *(_DWORD *)v57 = 34082680;
        *(_DWORD *)(v57 + 4) = 0;
        *(_QWORD *)(v57 + 8) = 0;
        *(_QWORD *)(v57 + 16) = 0;
        v76 = v57;
        MEMORY[0x184FE9280](a1: v54, a2: v55, a3: v57, a4: v53, a5: v56, a6: v13);
        v62 = v76;
        if ( *(int *)(v14 + 16) <= 0 )
          MEMORY[0x18277F280](a1: v60, a2: v61, a3: v58, a4: v59, a5: v76);
        return v62;
      }
    }
    else
    {
      if ( *(int *)(v14 + 16) <= 0 )
        JUMPOUT(0x184F47750LL);
      return (__int64)v13;
    }
  }
  else if ( *(int *)(v14 + 16) <= 0 )
  {
    JUMPOUT(0x184F47746LL);
  }
  return result;
}
