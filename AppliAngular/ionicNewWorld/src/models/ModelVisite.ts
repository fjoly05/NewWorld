export interface ModelVisite {
    //utilisateur
    location: string;
    stopover: boolean;
    prenom: string;
    nom: string;
    adresse : string;
    ville: string;
    codePostal: string;

    //visite
    id: string;
    libelle: string;
    date: string;

    //ControleProducteur
    concluante: boolean;
    motifRejet: string;
    debut: string;
    fin: string;
}
